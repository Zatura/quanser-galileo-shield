 /*! \file colors.h
     \brief This file define the output colors used by the program

        Created:  16/06/2019
        Compiler:  gcc

        Author:  Matheus Toazza Tura
                 Daniel Maia Cunha
                 Arthur Ribeiro

        Organization:  UFRGS
 */

 /*! \def NO_COLOR
     \brief no color
 */
 /*! \def RED
     \brief RED
 */
 /*! \def GREEN
     \brief GREEN
 */
 /*! \def BROWN
     \brief BROWN
 */
 /*! \def BLUE
     \brief BLUE
 */
 /*! \def MAGENTA
     \brief MAGENTA
 */
 /*! \def CYAN
     \brief CYAN
 */
 /*! \def GRAY
     \brief GRAY
 */
 /*! \def ANSI
     \brief ANSI
 */
 /*! \def BOLD
     \brief BOLD
 */
 /*! \def UNDERLINE
     \brief UNDERLINE
 */
 /*! \def ITALIC
     \brief ITALIC
 */

#ifndef COLORS_H
#define COLORS_H

/**
 *
 * ANSI color definitions for pretty-print
 *
 */
#define NO_COLOR    "\x1b[0m"
#define RED         "\x1b[31m"
#define GREEN       "\x1b[32m"
#define BROWN       "\x1b[33m"
#define BLUE        "\x1b[34m"
#define MAGENTA     "\x1b[35m"
#define CYAN        "\x1b[36m"
#define GRAY        "\x1b[37m"

#define ANSI        "\x1b[0m"
#define BOLD        "\x1b[1m"
#define UNDERLINE   "\x1b[4m"
#define ITALIC      "\x1b[3m"

#endif // COLORS_H
