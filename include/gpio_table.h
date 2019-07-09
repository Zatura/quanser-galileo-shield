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

// configure the chosen pin
// pin: from 0 to 19
// res: GPIO_LOW or GPIO_HIGH
// dir: DIR_OUT or DIR_IN
int set_pin(int pin, char*  res, char* dir);
int write_pin(int pin, char*  value);
char* read_pin(int pin, char* str_pin_data);
void initialize_gpio();
