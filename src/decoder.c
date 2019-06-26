/*
 * ============================================================================
 *
 *       Filename:  decoder.c
 *
 *    Description:  Decoder file of the project
 *
 *        Created:  23/06/2019
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
#include <string.h>
#include <stdio.h>
#include "gpio_table.h"
#include "gpio.h"
#include <time.h>
//#include <galileo2io.h>

#include "decoder.h"

// read decoder_value
int read_decoder() {
  char data[2];
  int decode_value = 0;
  struct timespec sleep_time;

  sleep_time.tv_sec = 0;
  sleep_time.tv_nsec = 90; //1000 ns = 1 us

  // Set OE and SEL pin into HIGH BYTE read state
  set_pin(OE_PIN, GPIO_LOW, GPIO_IN);
  set_pin(SEL_PIN, GPIO_LOW, GPIO_IN);
  nanosleep(&sleep_time,NULL);

  read_pin(D7_PIN, data);
  decode_value += atoi(data)*256;
  read_pin(D6_PIN, data);
  decode_value += atoi(data)*512;
  read_pin(D5_PIN, data);
  decode_value += atoi(data)*1024;
  read_pin(D4_PIN, data);
  decode_value += atoi(data)*2048;
  read_pin(D3_PIN, data);
  decode_value += atoi(data)*4096;
  read_pin(D2_PIN, data);
  decode_value += atoi(data)*8192;
  read_pin(D1_PIN, data);
  decode_value += atoi(data)*16384;
  read_pin(D0_PIN, data);
  decode_value += atoi(data)*32768;

  // Set OE and SEL pin into LOW BYTE read state
  set_pin(SEL_PIN, GPIO_HIGH, GPIO_IN);
  nanosleep(&sleep_time,NULL);

  read_pin(D7_PIN, data);
  decode_value += atoi(data);
  read_pin(D6_PIN, data);
  decode_value += atoi(data)*2;
  read_pin(D5_PIN, data);
  decode_value += atoi(data)*4;
  read_pin(D4_PIN, data);
  decode_value += atoi(data)*8;
  read_pin(D3_PIN, data);
  decode_value += atoi(data)*16;
  read_pin(D2_PIN, data);
  decode_value += atoi(data)*32;
  read_pin(D1_PIN, data);
  decode_value += atoi(data)*64;
  read_pin(D0_PIN, data);
  decode_value += atoi(data)*128;

  set_pin(OE_PIN, GPIO_HIGH, GPIO_IN);
}
