/*! \file messages.h
		\brief Display images on the screen

			 Created:  17/06/2019
			 Compiler:  gcc

			 Author:  Matheus Toazza Tura
								Daniel Maia Cunha
								Arthur Ribeiro

			 Organization:  UFRGS
*/
#ifndef MESSAGES_H
#define MESSAGES_H

#define __PROGRAM_NAME__ "qmotion"
#define __PROGRAM_EXTNAME__ "quanser motion"
#define __PROGRAM_VERSION__ "0.0.1"
#define __PROGRAM_AUTHOR__ "Matheus Tura (xturax@gmail.com)\n\tDaniel Maia Cunha\n\tArthur Ribeiro"

/*! \fn void help()
    \brief Display help message on the screen
*/
void help();

/*! \fn void usage()
    \brief Display usage message on the screen
*/
void usage();

/*! \fn void version()
    \brief Display version message on the screen
*/
void version();

/*! \fn void description()
    \brief Display description message on the screen
*/
void description();

/*! \fn void options()
    \brief Display options message on the screen
*/
void options();

/*! \fn void author()
    \brief Display author message on the screen
*/
void author();

#endif // MESSAGES_H
