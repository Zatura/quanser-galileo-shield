/*! \file args.c
    \brief Command line options parser using GNU getopt

       Created:  16/06/2019
       Compiler:  gcc

       Author:  Matheus Toazza Tura
                Daniel Maia Cunha
                Arthur Ribeiro

       Organization:  UFRGS
*/
#ifndef ARGS_H
#define ARGS_H
#include <stdbool.h>
#include <getopt.h>

/*! \def FILE_NAME_SIZE
    \brief Max size of a file name
*/
#define FILE_NAME_SIZE 512

/*! \struct options
    \brief Defines the command line allowed options struct
*/
struct options
{
    bool help;
    bool version;
    bool use_colors;
    bool move;
    bool target;
    bool reset;
    bool decoder;
    bool pid;
    char file_name[FILE_NAME_SIZE];
};

typedef struct options options_t;

/*! \fn void options_parser(int argc, char* argv[], options_t* options)
    \brief Public function that loops until command line options were parsed
    \param argc number of arguments
    \param argv array of arguments
    \param options struct of options
*/
void options_parser(int argc, char* argv[], options_t* options);

/*! \fn void set_default_options(options_t* options)
    \brief Sets the default options
    \param options Struct of options
*/
static void set_default_options(options_t* options)

void switch_options(int arg, char* argv[], options_t* options)


/*! \fn void get_file_name(int argc, char* argv[], options_t* options)
    \brief Tries to get the file name. Otherwise, gets stdin
    \param argc number of arguments
    \param argv array of arguments
    \param options struct of options
*/
void get_file_name(int argc, char* argv[], options_t* options)
#endif
