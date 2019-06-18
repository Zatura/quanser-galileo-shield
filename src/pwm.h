/*
 * ============================================================================
 *
 *       Filename:  pwm.h
 *
 *    Description:  Program messages implementation
 *
 *        Created:  17/06/2019
 *       Compiler:  gcc
 *
 *         Author:  Matheus Toazza Tura
 *                  Daniel Maia Cunha
 *                  Arthur Ribeiro
 *
 *   Organization:  UFRGS
 *
 * ============================================================================
 */
#ifndef PWM_H
#define PWM_H

#define PWM_DEFAULT_PERIOD 1000000

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include "../../lib/galileo2io.h"

int set_pwm_frequency();

int get_pwm_frequency();

/** Get period(ns) in the PWM_11 (IO10).
  * @param:  {void}
  * @return: {int} status of the operation.
  */
int get_pwm_period();

/** Set period(ns) in the PWM_11 (IO10).
  * @param:  {int} period in nanoseconds.
  * @return: {int} status of the operation.
  */
int set_pwm_period(int period);

/** Set duty cycle (%) in the PWM_11 (IO10).
  * @param:  {int} duty cycle.
  * @return: {int} status of the operation.
  */
int set_duty_cycle(int duty_cycle);

/** Set duty period (ns) in the PWM_11 (IO10).
  * @param:  {int} duty cycle.
  * @return: {int} status of the operation.
  */
int set_duty_period(int duty_period);

/** Enable the GalileoGen2's PWM_11 (IO10).
  * @param:  {void}.
  * @return: {int} status of the operation.
  */
int enable_pwm();

/** Unable the GalileoGen2's PWM_11 (IO10).
  * @param:  {void}.
  * @return: {int} status of the operation.
  */
int disable_pwm();

#endif
