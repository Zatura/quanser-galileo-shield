#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "decoder.h"
#include "control.h"
#include "constants.h"

int move(float angle, int time){
  printf("angle: %f\n", angle);
  printf("time: %d\n\n", time);
  while(1){
    //TODO
  }
  return 0;
}

int move_to_angle(float angle){
  pid_control *pid = (pid_control*)malloc(sizeof(pid_control));
  clock_t last, now;
  float current_position = 0;
  float error = 0;

  set_gains(pid, 1, 0, 0);

  last = clock();
  printf("angle: %f\n", angle);
  printf("error: %f\n", error);
  while(1){
    current_position = 360*read_decoder()/QNSR_RESOLUTION;
    error = angle - current_position;
    now = clock();
    update_voltage(pid, error, (now-last)/CLOCKS_PER_SEC);
    last = now;
  }
  return 0;
}
