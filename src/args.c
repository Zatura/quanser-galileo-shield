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
#include "messages.h"
#include "args.h"
#include "colors.h"
#include "motion.h"

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

        case 'm':
            options->move = true;
            move(atof(argv[2]), atoi(argv[3]));
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
        {"frequency", no_argument, 0, 'f'},
        {"no-colors", no_argument, 0, 0},
    };

    while (true) {

        int option_index = 0;
        arg = getopt_long(argc, argv, "hvmft:", long_options, &option_index);

        /* End of the options? */
        if (arg == -1) break;

        /* Find the matching case of the argument */
        switch_options(arg, argv, options);
    }

    /* Gets the file name or exits with error */
    get_file_name(argc, argv, options);
}
