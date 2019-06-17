/*
 * ============================================================================
 *
 *       Filename:  messages.h
 *
 *    Description:  Header file of program messages
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
#ifndef MESSAGES_H
#define MESSAGES_H

#define __PROGRAM_NAME__ "qmotion"
#define __PROGRAM_EXTNAME__ "quanser motion"
#define __PROGRAM_VERSION__ "0.0.1"
#define __PROGRAM_AUTHOR__ "Matheus Tura (xturax@gmail.com)\n\tDaniel Maia Cunha\n\tArthur Ribeiro"

void help();
void usage();
void version();
void description();
void options();
void author();

#endif // MESSAGES_H
