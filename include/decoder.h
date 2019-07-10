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
int read_decoder();
float read_angle();
void reset_oe();
void reset_decoder();
void buffer_detect(int now, int last, int *count);
