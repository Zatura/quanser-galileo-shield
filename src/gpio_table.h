/*! \file gpio_table.h
		\brief Define function to handle with gpio

			 Created:  17/06/2019
			 Compiler:  gcc

			 Author:  Matheus Toazza Tura
								Daniel Maia Cunha
								Arthur Ribeiro

			 Organization:  UFRGS
*/

#include <string.h>
//#include <galileo2io.h>

#define GALILEO_DUMMY_DEVICE "/home/human/Documents/UFRGS/MICROS/galileo-dummy-device"
#define PWM_CLASS_PATH "/sys/class/pwm/pwmchip0"
#define GPIO_CLASS_PATH "/sys/class/gpio"
#define GPIO_EXPORT_PATH GPIO_CLASS_PATH "/export"
#define GPIO_UNEXPORT_PATH GPIO_CLASS_PATH "/unexport"
#define GPIO_LOW "0\0"
#define GPIO_HIGH "1\0"
#define GPIO_PULLDOWN "0\0"
#define GPIO_PULLUP "1\0"
#define GPIO_OUT "out\0"
#define GPIO_IN "in\0"
#define NONE 2
//#define RESOLUTION ot@.2
#define RESOLUTION 1365 //PPR
#define QNSR_RESOLUTION 4096 //counts per quadrature

#define D0_PIN 0
#define D1_PIN 1
#define D2_PIN 2
#define D3_PIN 3
#define D4_PIN 4
#define D5_PIN 5
#define D6_PIN 6
#define D7_PIN 7

#define RST_PIN 8
#define OE_PIN 9
#define SEL_PIN 10
#define SD_PIN 12

#define LMT_SWITCH_R 15
#define LMT_SWITCH_L 14

/*! \fn int set_pin(int pin, char*  res, char* dir)
    \brief Configure the chosen pin
    \param pin From 0 to 19
    \param res GPIO_LOW or GPIO_HIGH
    \param dir DIR_OUT or DIR_IN
    \return code
*/
int set_pin(int pin, char*  res, char* dir);

/*! \fn int write_pin(int pin, char*  value)
    \brief Write a value to the chosen pin
    \param pin From 0 to 19
    \param value Value to write
    \return Code
*/
int write_pin(int pin, char*  value);

/*! \fn char* read_pin(int pin, char* str_pin_data)
    \brief Read value from the chosen pin
    \param pin From 0 to 19
    \param str_pin_data data
    \return Read value
*/
char* read_pin(int pin, char* str_pin_data);

/*! \fn void initialize_gpio()
    \brief Initialize GPIO config
*/
void initialize_gpio();
