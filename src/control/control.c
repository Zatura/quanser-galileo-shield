#include "control.h"

void set_gains(pid_control* pid, float kp, float ki, float kd){
  pid->kp = kp;
  pid->kd = kd;
  pid->ki = ki;
}

void update_voltage(pid_control* pid, float error, float utime){
  pid->P_error = error;
  pid->D_error = (error - pid->D_error)/utime;
  pid->I_error += error;
  pid->voltage = 27*(pid->kp*pid->P_error + pid->kd*pid->D_error + pid->ki*pid->I_error)/180;
}
