
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "decoder.h"
#include "control.h"
#include "gpio_table.h"
#include "pwm.h"
#include "galileo2io.h"

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
  int result = load_pid(&pid->kp, &pid->ki, &pid->kd);
  printf("res %d\n",result);
  if (result == 0){
    last = clock();
    current_position = 0;
    int print_count = 0;
    double time_elapsed = 0;

    while(1){
      current_position = (float)360*read_decoder()/QNSR_RESOLUTION;
      error = angle - current_position;
      if (print_count % 10 == 0)
       printf("%d: ERR %f | POS %f | VOL %f\n",print_count, error, current_position, pid->voltage);
      now = clock();
      time_elapsed = now*2.8/CLOCKS_PER_SEC;
      update_voltage(pid, error, ((double)(now-last))/CLOCKS_PER_SEC);
      move(pid->voltage);
      last = now;
      print_count++;
      lmt_right = read_limit_switch_right();
      lmt_left = read_limit_switch_left();

      if (lmt_right == 0 || lmt_left == 0){
          stop();
          break;
      }
    }
  };
  return 1;
}

void stop(){
  set_duty_cycle(50);
  usleep(100);
  write_pin(SD_PIN, GPIO_HIGH);
  disable_pwm();
}
