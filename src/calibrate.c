/*
 * ============================================================================
 *
 *       Filename:  init.c
 *
 *    Description:  Init file of the project
 *
 *        Created:  23/06/2019
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
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//#include <galileo2io.h>
#include "decoder.h"
#include "gpio_table.h"
#include "limit_switch.h"
#include "limit_switch.h"

void calibrate() {
    reset_decoder();
    //set_duty_cycle(get_pwm_period());
}
