/*! \file control.h
		\brief Define functions to calculate PID Controller

			 Created:  27/06/2019
			 Compiler:  gcc

			 Author:  Matheus Toazza Tura
								Daniel Maia Cunha
								Arthur Ribeiro

			 Organization:  UFRGS
*/


/*! \struct options
    \brief Defines constants related to pid control
*/
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

/*! \fn void update_voltage(pid_control* pid, float error, double utime);
    \brief Update voltage to pid Controller
		\param pid struct of pid
		\param error error
		\param utime timing between the measures
*/
void update_voltage(pid_control* pid, float error, double utime);

/*! \fn void set_gains(pid_control* pid, float kp, float ki, float kd);
    \brief Set gains
		\param pid struct of pid
		\param kp kp
		\param ki ki
		\param kd kd
*/
void set_gains(pid_control* pid, float kp, float ki, float kd);

/*! \fn void set_gains(pid_control* pid, float kp, float ki, float kd);
    \brief Saves pid to file
		\param kp kp
		\param ki ki
		\param kd kd
		\return success result
*/
int save_pid(float kp, float ki, float kd);


/*! \fn int load_pid(float* kp, float* ki, float* kd)
    \brief Load from file
		\param kp kp
		\param ki ki
		\param kd kd
		\return success result
*/
int load_pid(float* kp, float* ki, float* kd);
