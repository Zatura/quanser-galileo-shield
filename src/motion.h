/*! \file motion.h
		\brief Moves robot

			 Created:  17/06/2019
			 Compiler:  gcc

			 Author:  Matheus Toazza Tura
								Daniel Maia Cunha
								Arthur Ribeiro

			 Organization:  UFRGS
*/

/*! \fn int move(float voltage)
    \brief Move the arm according to the voltage
    \param voltage Voltage
    \return code
*/
int move(float voltage);

/*! \fn int move_to_angle(float angle)
    \brief Move the arm according to the angle
    \param voltage angle
    \return code
*/
int move_to_angle(float angle);

/*! \fn void stop()
    \brief Stop movement
*/
void stop();
