struct _pid_control{

	/* Gain constants*/
	float kp;
	float ki;
	float kd;
  /* Errors */
  float P_error;
  float I_error;
  float D_error;

  float voltage;
};
typedef struct _pid_control pid_control;

void update_voltage(pid_control* pid, float error, float utime);
void set_gains(pid_control* pid, float kp, float ki, float kd);
