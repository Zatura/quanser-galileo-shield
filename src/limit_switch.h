/*! \file limit_switch.h
		\brief Limit switch handler

			 Created:  17/06/2019
			 Compiler:  gcc

			 Author:  Matheus Toazza Tura
								Daniel Maia Cunha
								Arthur Ribeiro

			 Organization:  UFRGS
*/

/*! \fn int read_limit_switch_left()
    \brief Read left limit switch
    \return left limit switch value
*/
int read_limit_switch_left();

/*! \fn int read_limit_switch_right();
    \brief Read right limit switch
    \return right limit switch value
*/
int read_limit_switch_right();
