/*
 * ============================================================================
 *
 *       Filename:  limit_switch.c
 *
 *    Description:  Limit Switch file of the project
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
#include "gpio_table.h"
#include "limit_switch.h"

// read limit_switch
int read_limit_switch() {
    char data[2];
    read_pin(LIMIT_SWITCH_LEFT, data);
    return !atoi(data);
}
