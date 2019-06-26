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
    char data[2];
#define DEBUG 0
#ifdef DEBUG
    fprintf(stdout, BLUE "Command line options:\n" NO_COLOR);
    fprintf(stdout, BROWN "help: %d\n" NO_COLOR, options.help);
    fprintf(stdout, BROWN "version: %d\n" NO_COLOR, options.version);
    fprintf(stdout, BROWN "use colors: %d\n" NO_COLOR, options.use_colors);
    fprintf(stdout, BROWN "filename: %s\n" NO_COLOR, options.file_name);
#endif

/*set_pin(D0_PIN, GPIO_LOW, GPIO_IN);
set_pin(D1_PIN, GPIO_LOW, GPIO_IN);
set_pin(D2_PIN, GPIO_LOW, GPIO_IN);
set_pin(D3_PIN, GPIO_LOW, GPIO_IN);
set_pin(D4_PIN, GPIO_LOW, GPIO_IN);
set_pin(D5_PIN, GPIO_LOW, GPIO_IN);
set_pin(D6_PIN, GPIO_LOW, GPIO_IN);
set_pin(D7_PIN, GPIO_LOW, GPIO_IN);*/

/*set_pin(RST_PIN, GPIO_HIGH, GPIO_OUT);
set_pin(OE_PIN, GPIO_HIGH, GPIO_OUT);
set_pin(SEL_PIN, GPIO_HIGH, GPIO_OUT);*/

//write_pin(RST_PIN, GPIO_HIGH);

/*while(1){
  write_pin(RST_PIN, GPIO_HIGH);
  sleep(1);
  write_pin(RST_PIN, GPIO_LOW);
  sleep(1);
}*/



while(1){
    decoder_reg = read_decoder();
    printf("\n");
    printf("DECODER_VALUE: ");
    printf("%d\n", decoder_reg);
    usleep(20000);
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
