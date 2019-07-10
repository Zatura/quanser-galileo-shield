/*
 * ============================================================================
 *
 *       Filename:  messages.c
 *
 *    Description:  Program messages implementation
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
#include "colors.h"
#include "messages.h"
#include "galileo2io.h"

/*
 * Help message
 */
void help()
{
    fprintf(stdout, CYAN __PROGRAM_NAME__" - "__PROGRAM_EXTNAME__"\n\n" NO_COLOR);
    usage();
    description();
    options();
    author();
    version();
}

/*
 * Usage message
 */
void usage()
{
    fprintf(stdout, BROWN "USAGE\n" NO_COLOR);
    fprintf(stdout, "\t%s [options] input file\n\n", __PROGRAM_NAME__);
}

/*
 * Description message
 */
void description()
{
    fprintf(stdout, BROWN "DESCRIPTION\n" NO_COLOR);
    fprintf(stdout, "\tWrite here what you want to be your project description."
            "Observe that you can break a string inside a fprintf\n\n");
}

/*
 * Options message
 */
void options()
{
    fprintf(stdout, BROWN "OPTIONS\n" NO_COLOR);
    fprintf(stdout, BOLD GRAY "\t-v, --version\n" NO_COLOR ANSI
                    "\t\tPrints %s version\n\n", __PROGRAM_NAME__);
    fprintf(stdout, BOLD GRAY "\t-h, --help\n" NO_COLOR ANSI
                    "\t\tPrints this help message\n\n");
    fprintf(stdout, BOLD GRAY "\t-m "ANSI UNDERLINE"VOLTAGE"ANSI" "UNDERLINE"TIME"ANSI BOLD", --move "ANSI UNDERLINE"VOLTAGE"ANSI" "UNDERLINE"TIME"ANSI"\n" NO_COLOR ANSI
                    "\t\tMoves the quanser robotic arm using VOLTAGE(-27 to 27) during TIME seconds \n\n");
    fprintf(stdout, BOLD GRAY "\t-t "ANSI UNDERLINE"ANGLE"ANSI BOLD", --target "ANSI UNDERLINE"ANGLE"ANSI" \n" NO_COLOR ANSI
                    "\t\tMoves the quanser robotic arm to the target at ANGLE degrees \n\n");
    fprintf(stdout, BOLD GRAY "\t-d, --decoder\n" NO_COLOR ANSI
                    "\t\tReads and shows decoder and limit switch status\n\n");
    fprintf(stdout, BOLD GRAY "\t-r, --reset\n" NO_COLOR ANSI
                    "\t\tResets decoder register\n\n");
    fprintf(stdout, BOLD GRAY "\t-p "ANSI UNDERLINE"P"ANSI" "ANSI UNDERLINE"I"ANSI" "ANSI UNDERLINE"D"ANSI BOLD", --pid "ANSI UNDERLINE"P"ANSI" "ANSI UNDERLINE"I"ANSI" "ANSI UNDERLINE"D"ANSI" \n" NO_COLOR ANSI
                    "\t\tSets Proportional(P), Integrative(I) and Derivative(D) gains, saved at pid.dat file\n\n");
    fprintf(stdout, BOLD GRAY "\t-c, --calibrate\n" NO_COLOR ANSI
                    "\t\tFind the maximum amplitude of the quanser arm and saves it at calibration.dat\n\n");    
    fprintf(stdout, BOLD GRAY "\t--no-color\n" NO_COLOR ANSI
                    "\t\tDoes not use colors for printing\n\n");

}

/*
 * Author message
 */
void author()
{
    fprintf(stdout, BROWN "AUTHORS\n" NO_COLOR);
    fprintf(stdout, "\t%s\n\n", __PROGRAM_AUTHOR__);
}

/*
 * Version message
 */
void version()
{
    fprintf(stdout, __PROGRAM_NAME__ GRAY " version: " GRAY "%s\n" NO_COLOR,
            __PROGRAM_VERSION__);
}
