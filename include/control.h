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

struct pid_save{
	float kp;
	float ki;
	float kd;
};


void update_voltage(pid_control* pid, float error, double utime);
void set_gains(pid_control* pid, float kp, float ki, float kd);
int save_pid(float kp, float ki, float kd);
int load_pid(float* kp, float* ki, float* kd);
