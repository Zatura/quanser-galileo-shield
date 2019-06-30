/*
 * ============================================================================
 *
 *       Filename:  args.h
 *
 *    Description:  Header file of the command line options parser
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

#ifndef ARGS_H
#define ARGS_H

#include <stdbool.h>
#include <getopt.h>

/* Max size of a file name */
#define FILE_NAME_SIZE 512

/* Defines the command line allowed options struct */
struct options
{
    bool help;
    bool version;
    bool use_colors;
    bool move;
    char file_name[FILE_NAME_SIZE];
};

/* Exports options as a global type */
typedef struct options options_t;

/* Public functions section */
void options_parser(int argc, char* argv[], options_t* options);

#endif // ARGS_H
