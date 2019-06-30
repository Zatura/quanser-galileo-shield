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
#include <unistd.h>
#include "args.h"
#include "colors.h"
#include "gpio_table.h"
#include "decoder.h"


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

//write_pin(RST_PIN, GPIO_HIGH);
//int pwm_period = get_pwm_period();
//int duty_period = get_duty_period();
//puts(duty_period);
/*while(1){
    decoder_reg = read_decoder();
    printf("\n");
    printf("DECODER_VALUE: ");
    printf("%d\n", decoder_reg);
    usleep(20000);
    result = system("clear");
    if(result){
      puts("system clear fail");
    }
}*/
    return EXIT_SUCCESS;
}
