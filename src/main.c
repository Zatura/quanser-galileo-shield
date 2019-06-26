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
#include <time.h>
#include "args.h"
#include "colors.h"
#include "gpio.h"
#include "gpio_table.h"
#include "decoder.h"


int main(int argc, char* argv[])
{
    /* Read command line options */
    options_t options;
    options_parser(argc, argv, &options);
    int decoder_reg = 0;
    char button_clicked;

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
set_pin(0, GPIO_LOW, GPIO_IN);
set_pin(1, GPIO_LOW, GPIO_IN);
set_pin(2, GPIO_LOW, GPIO_IN);
set_pin(3, GPIO_LOW, GPIO_IN);
set_pin(4, GPIO_LOW, GPIO_IN);
set_pin(5, GPIO_LOW, GPIO_IN);
set_pin(6, GPIO_LOW, GPIO_IN);
set_pin(7, GPIO_LOW, GPIO_IN);

while(1){
  decoder_reg = read_decoder();
  printf("%d\n", decoder_reg);
  sleep(0.1);
  system("clear");
  //scanf("%c", &button_clicked);
  //if (button_clicked == 'q')
//    break;

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
