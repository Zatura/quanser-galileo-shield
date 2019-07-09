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
#include "galileo2io.h"

int get_pwm_frequency(){
  //TODO
  return 0;
}

int set_pwm_frequency(int freq){
  printf("not implemented!! freq %d\n",freq);
  //TODO
  return 0;
}

int get_pwm_period() {
  char str_data[20] = "0123456789123";
  puts(str_data);
  pgets((char*)str_data, sizeof(str_data),PWM_CLASS_PATH"/device/pwm_period");
  return atoi(str_data);
}

int set_pwm_period(int period) {
    char period_string[32];
    snprintf(period_string, sizeof(period_string), "%d", period);
    return pputs(PWM_CLASS_PATH"/device/pwm_period", period_string);
}

int get_duty_period() {
  char str_data[20];
  pgets(str_data, sizeof(str_data),PWM_CLASS_PATH"/pwm9/duty_cycle");
  return atoi(str_data);
}

int set_duty_period(int duty_period) {
    char duty_period_string[32];
    snprintf(duty_period_string, sizeof duty_period_string, "%d", duty_period);
    return pputs(PWM_CLASS_PATH"/pwm9/duty_cycle", duty_period_string);
}

int set_duty_cycle(float duty_cycle) {
    if(duty_cycle > 100 || duty_cycle < 0) {
        //return ERROR;
        return 1;
    }
    int duty_period = floor((float) duty_cycle * PWM_DEFAULT_PERIOD / 100);
    return set_duty_period(duty_period);
}

int enable_pwm() {
    return pputs(PWM_CLASS_PATH"/pwm9/enable", "1");
}

int disable_pwm() {
    return pputs(PWM_CLASS_PATH"/pwm9/enable", "0");
}
