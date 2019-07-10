
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <signal.h>
#include "decoder.h"
#include "control.h"
#include "gpio_table.h"
#include "pwm.h"
#include "limit_switch.h"

static volatile int keep_running = 1;

void stop(){
  set_duty_cycle(50);
  usleep(100);
  write_pin(SD_PIN, GPIO_HIGH);
  disable_pwm();
}

void signal_handler() {
    keep_running = 0;
    stop();
    disable_pwm();
}

int move(float voltage){
  voltage = fminf(27, voltage);
  voltage = fmaxf(-27, voltage);
  float duty_cycle = 50 + 50*(voltage)/27;

  duty_cycle = fminf(96, duty_cycle);
  duty_cycle = fmaxf(1, duty_cycle);
  set_duty_cycle(duty_cycle);

  // shutdown-pin low: Turn on the bridge drivers
  write_pin(SD_PIN, GPIO_LOW);
  enable_pwm();
  return 0;
}  

int move_to_angle(float angle){
  pid_control *pid = (pid_control*)malloc(sizeof(pid_control));
  int lmt_left = 0;
  int lmt_right = 0;
  clock_t last, now;
  float current_position = 0;
  float error = 0;
  int last_dec = 0;
  int now_dec = 0;
  int overflow_count = 0;
  int decoder_reg = 0;
  int max_value = load_calibration();
  
  int result = load_pid(&pid->kp, &pid->ki, &pid->kd);
  angle = fmod(angle, 360);
  angle = 2*M_PI*angle/360;
  if (result == 0){
    last = clock();
    current_position = 0;
    int print_count = 0;

    signal(SIGINT, signal_handler);

    last_dec = read_decoder();
    while(keep_running){
      
      
      
      
      now_dec = read_decoder();
      buffer_detect(now_dec, last_dec, &overflow_count);
      decoder_reg = now_dec + overflow_count*65536;	
      
      current_position = M_PI*decoder_reg/max_value;
      error = angle - current_position;
      if (print_count % 10 == 0)
       printf("%d:   POS: %f  |  TARGET %f  |  ERR %f rads  |  VOL %f V  |  REG %d\n", print_count, current_position, angle, error, pid->voltage, decoder_reg);
      now = clock();
      update_voltage(pid, error, ((double)(now-last))/CLOCKS_PER_SEC);
      move(pid->voltage);
      last = now;
      print_count++;
      lmt_right = read_limit_switch_right();
      lmt_left = read_limit_switch_left();

      /*if (lmt_right == 1 && pid->voltage > 0){
         stop();
         break;
      }

      if (lmt_left == 1 && pid->voltage < 0){
         stop();
         break;
      }    */
      last_dec = now_dec;
    }
    stop();
  };
  return 1;
}
