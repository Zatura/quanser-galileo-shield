/*
 * ============================================================================
 *
 *       Filename:  gpio.h
 *
 *    Description:  Main file of the project
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
// #define PWM_CLASS_PATH "/home/human/Documents/UFRGS/MICROS/galileo-dummy-device/sys/class/pwm/pwmchip0"
// #define GPIO_CLASS_PATH "/home/human/Documents/UFRGS/MICROS/galileo-dummy-device/sys/class/gpio"
#define PWM_CLASS_PATH "/sys/class/pwm/pwmchip0"
#define GPIO_CLASS_PATH "/sys/class/gpio"
#define GPIO_EXPORT_PATH (GPIO_CLASS_PATH "/export")
#define GPIO_UNEXPORT_PATH (GPIO_CLASS_PATH "/unexport")
#define GPIO_LOW "0\0"
#define GPIO_HIGH "1\0"
#define GPIO_PULLDOWN "0\0"
#define GPIO_PULLUP "1\0"
#define GPIO_OUT "out\0"
#define GPIO_IN "in\0"
#define NONE 2
