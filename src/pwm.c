/*
 * ============================================================================
 *
 *       Filename:  pwm.c
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
#include "gpio_table.h"
#include "pwm.h"
#include "pputs.h"
#include "pgets.h"

int set_pwm_frequency(){
  return 0;
}

int get_pwm_frequency(){
  return 0;
}

int get_pwm_period() {
  /*
    static char period_string[32];
    if (pgets(period_string, sizeof(period_string), "/sys/class/pwm/pwmchip0/device/pwm_period") < 0) {
        printf("\nReturning default PWM period: %d", PWM_DEFAULT_PERIOD);
        return PWM_DEFAULT_PERIOD;
    }
    return (int)period_string;
    */
    return 1;
}

int set_pwm_period(int period) {
    char period_string[32];
    snprintf(period_string, sizeof period_string, "%d", period);
    return pputs(PWM_CLASS_PATH"device/pwm_period", period_string);
}

int set_duty_period(int duty_period) {
    char duty_period_string[32];
    snprintf(duty_period_string, sizeof duty_period_string, "%d", duty_period);
    return pputs(PWM_CLASS_PATH"pwm11 /duty_cycle", duty_period_string);
}

int set_duty_cycle(int duty_cycle) {
    if(duty_cycle > 100 || duty_cycle < 0) {
        //return ERROR;
        return 1;
    }
    int duty_period = (int) duty_cycle * PWM_DEFAULT_PERIOD / 100;
    return set_duty_period(duty_period);
}

int enable_pwm() {
    return pputs(PWM_CLASS_PATH"pwm11/enable", "1");
}

int disable_pwm() {
    return pputs(PWM_CLASS_PATH"pwm11/enable", "0");
}
