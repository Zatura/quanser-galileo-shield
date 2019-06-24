/*
 * ============================================================================
 *
 *       Filename:  gpio_table.c
 *
 *    Description:  Main file of the project
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

#include <string.h>
//#include <galileo2io.h>

#include "gpio.h"
#include "pputs.h"

#define D0_PIN 7
#define D1_PIN 6
#define D2_PIN 5
#define D3_PIN 4
#define D4_PIN 3
#define D5_PIN 2
#define D6_PIN 1
#define D7_PIN 0

#define OE_PIN 8
#define SEL_PIN 9

// configure the chosen pin
// pin: from 0 to 19
// res: GPIO_LOW or GPIO_HIGH
// dir: DIR_OUT or DIR_IN
int set_pin(int pin, char*  res, char* dir);
int write_pin(int pin, char*  value);
char* read_pin(int pin, char* str_pin_data);
void initialize_gpio();
