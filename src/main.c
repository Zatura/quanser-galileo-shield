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
