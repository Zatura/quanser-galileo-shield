/*
 * ============================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Main file of the project
 *
 *        Created:  16/06/2019
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
#include <stdio.h>
#include <stdlib.h>
#include "args.h"
#include "colors.h"
#include "gpio.h"
#include "gpio_table.h"


int main(int argc, char* argv[])
{
    /* Read command line options */
    options_t options;
    options_parser(argc, argv, &options);

#ifdef DEBUG
    fprintf(stdout, BLUE "Command line options:\n" NO_COLOR);
    fprintf(stdout, BROWN "help: %d\n" NO_COLOR, options.help);
    fprintf(stdout, BROWN "version: %d\n" NO_COLOR, options.version);
    fprintf(stdout, BROWN "use colors: %d\n" NO_COLOR, options.use_colors);
    fprintf(stdout, BROWN "filename: %s\n" NO_COLOR, options.file_name);
#endif

/*write_pin(7, GPIO_LOW);
write_pin(6, GPIO_HIGH);
write_pin(5, GPIO_HIGH);
write_pin(4, GPIO_LOW);
write_pin(3, GPIO_HIGH);
write_pin(2, GPIO_HIGH);
write_pin(1, GPIO_LOW);
write_pin(0, GPIO_HIGH);*/

while(1){
  char data[2];
  int decode_value = 0;
  read_pin(7, data);
  decode_value += atoi(data);
  read_pin(6, data);
  decode_value += atoi(data)*2;
  read_pin(5, data);
  decode_value += atoi(data)*4;
  read_pin(4, data);
  decode_value += atoi(data)*8;
  read_pin(3, data);
  decode_value += atoi(data)*16;
  read_pin(2, data);
  decode_value += atoi(data)*32;
  read_pin(1, data);
  decode_value += atoi(data)*64;
  read_pin(0, data);
  decode_value += atoi(data)*128;
  printf("\n");
  printf("%d",decode_value);
  printf("\n");
  printf("\e[1;1H\e[2J");
}
/*set_pin(7, char*  res, GPIO_OUT);

set_pin(0, GPIO_DOWN, GPIO_IN);
set_pin(1, GPIO_DOWN, GPIO_IN);
set_pin(2, GPIO_DOWN, GPIO_IN);
set_pin(3, GPIO_DOWN, GPIO_IN);
set_pin(4, GPIO_DOWN, GPIO_IN);
set_pin(5, GPIO_DOWN, GPIO_IN);
set_pin(6, GPIO_DOWN, GPIO_IN);
set_pin(7, GPIO_DOWN, GPIO_IN);*/


    return EXIT_SUCCESS;
}
