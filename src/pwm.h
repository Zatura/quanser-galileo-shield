/*! \file pwm.h
		\brief Handler pwm

			 Created:  19/06/2019
			 Compiler:  gcc

			 Author:  Matheus Toazza Tura
								Daniel Maia Cunha
								Arthur Ribeiro

			 Organization:  UFRGS
*/
#ifndef PWM_H
#define PWM_H

#define PWM_DEFAULT_PERIOD 666666

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include "../../lib/galileo2io.h"
int get_pwm_frequency();

int set_pwm_frequency(int freq);

/*! \fn int get_pwm_period()
    \brief Get period(ns) in the PWM_11 (IO10)
    \return Pwm period
*/
int get_pwm_period();

/*! \fn int set_pwm_period()
    \brief Get period(ns) in the PWM_11 (IO10)
    \param period Period in nanoseconds
    \return Status of the operation
*/
int set_pwm_period(int period);

/*! \fn int get_duty_period()
    \brief Get duty period (ns) in the PWM_11 (IO10)
    \param period Period in nanoseconds
    \return Period in nanoseconds
*/
int get_duty_period();

/*! \fn int set_duty_period(int duty_period)
    \brief Set duty period (ns) in the PWM_11 (IO10).
    \param period Period in nanoseconds
    \return Status of the operation
*/
int set_duty_period(int duty_period);

/*! \fn int set_duty_cycle(float duty_cycle)
    \brief Set duty cycle (%) in the PWM_11 (IO10).
    \param duty_cycle duty cycle
    \return Status of the operation
*/
int set_duty_cycle(float duty_cycle);

/*! \fn int enable_pwm()
    \brief Enable the GalileoGen2's PWM_11 (IO10).
    \return Status of the operation
*/
int enable_pwm();


/*! \fn int disable_pwm()
    \brief Unable the GalileoGen2's PWM_11 (IO10).
    \return Status of the operation
*/
int disable_pwm();

#endif
