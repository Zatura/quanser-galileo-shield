/*
 * ============================================================================
 *
 *       Filename:  args.c
 *
 *    Description:  Command line options parser using GNU getopt
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
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "messages.h"
#include "args.h"
#include "colors.h"
#include "motion.h"
#include "control.h"
#include "limit_switch.h"
#include "decoder.h"
#include "gpio_table.h"
#include "galileo2io.h"

/*
 * Sets the default options
 */
static void set_default_options(options_t* options)
{
    options->help = false;
    options->version = false;
    options->use_colors = true;
    options->move = false;
}

/*
 * Finds the matching case of the current command line option
 */
void switch_options(int arg, char* argv[], options_t* options)
{
    int result = 0;
    int decoder_reg = 0;
    int lmt_right, lmt_left = 0;
    switch (arg)
    {
        case 'h':
            options->help = true;
            help();
            puts("H");
            exit(EXIT_SUCCESS);

        case 'v':
            options->version = true;
            version();
            puts("V");
            exit(EXIT_SUCCESS);

        case 't':
            options->target = true;
            move_to_angle(atof(argv[2]));
            exit(EXIT_SUCCESS);

        case 'm':
            options->move = true;
            move(atof(argv[2]));
            usleep(atof(argv[3])*1000000);
            stop();
            printf("stop\n");
            exit(EXIT_SUCCESS);

        case 'd':
            options->decoder = true;
            while(1){
                lmt_right = read_limit_switch_right();
                lmt_left = read_limit_switch_left();
                decoder_reg = read_decoder();
                printf("\n");
                printf("DECODER_VALUE %d    LMLT_L: %d    LMLT_R: %d\n", decoder_reg, lmt_left, lmt_right);
                printf("ANGLE %f\n", (float)360*decoder_reg/QNSR_RESOLUTION);
                usleep(20000);
                result = system("clear");
                if(result){
                    puts("system clear fail");
                }
            }
            exit(EXIT_SUCCESS);

        case 'p':
            options->pid = true;
            save_pid(atof(argv[2]), atof(argv[3]), atof(argv[4]));
            exit(EXIT_SUCCESS);

        case 'r':
            options->reset = true;
            reset_decoder();
            exit(EXIT_SUCCESS);



        case 0:
            options->use_colors = false;
            break;

        case '?':
            usage();
            exit(EXIT_FAILURE);

        default:
            usage();
            abort();
    }
}

/*
 * Tries to get the file name. Otherwise, gets stdin
 */
void get_file_name(int argc, char* argv[], options_t* options)
{

    /* If there is more arguments, probably, it is an input file */
    if (optind < argc) {
        strncpy(options->file_name, argv[optind++], FILE_NAME_SIZE);

    /* Otherwise, assumes stdin as the input file */
    } else {
        strncpy(options->file_name, "-", FILE_NAME_SIZE);
    }
}

/*
 * Public function that loops until command line options were parsed
 */
void options_parser(int argc, char* argv[], options_t* options)
{
    set_default_options(options);

    int arg; /* Current option */

    /* getopt allowed options */
    static struct option long_options[] =
    {
        {"help", no_argument, 0, 'h'},
        {"version", no_argument, 0, 'v'},
        {"move", no_argument, 0, 'm'},
        {"pid", no_argument, 0, 'p'},
        {"reset", no_argument, 0, 'r'},
        {"decoder", no_argument, 0, 'd'},
        {"target", no_argument, 0, 't'},
        {"frequency", no_argument, 0, 'f'},
        {"no-colors", no_argument, 0, 0},
    };

    while (true) {

        int option_index = 0;
        arg = getopt_long(argc, argv, "hvmrdpft:", long_options, &option_index);

        /* End of the options? */
        if (arg == -1) break;

        /* Find the matching case of the argument */
        switch_options(arg, argv, options);
    }

    /* Gets the file name or exits with error */
    get_file_name(argc, argv, options);
}
