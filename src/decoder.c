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
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "galileo2io.h"
#include "gpio_table.h"
#include "decoder.h"

// read decoder_value
int read_decoder() {
  char data[2];
  int decode_value = 0;
  struct timespec sleep_time;

  sleep_time.tv_sec = 0;
  sleep_time.tv_nsec = 84; //1000 ns = 1 us

  // Set OE and SEL pin into HIGH BYTE read state
  write_pin(OE_PIN, GPIO_LOW);
  write_pin(SEL_PIN, GPIO_LOW);
  //write_pin(SEL_PIN, GPIO_HIGH);
  nanosleep(&sleep_time,NULL);

  read_pin(D0_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*32768;
  read_pin(D1_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*16384;
  read_pin(D5_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*1024;
  read_pin(D2_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*8192;
  read_pin(D3_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*4096;
  read_pin(D4_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*2048;
  read_pin(D6_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*512;
  read_pin(D7_PIN, data);
  // printf("%c   ",data[0]);
  decode_value += atoi(data)*256;

  // Set OE and SEL pin into LOW BYTE read state
  write_pin(SEL_PIN, GPIO_HIGH);
  nanosleep(&sleep_time,NULL);

  read_pin(D0_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*128;
  read_pin(D1_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*64;
  read_pin(D2_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*32;
  read_pin(D3_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*16;
  read_pin(D4_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*8;
  read_pin(D5_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*4;
  read_pin(D6_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data)*2;
  read_pin(D7_PIN, data);
  // printf("%c ",data[0]);
  decode_value += atoi(data);

  write_pin(OE_PIN, GPIO_HIGH);
  return decode_value;
}

float read_angle(){
  int decoder_reg = read_decoder();
  return (float)2*M_PI*decoder_reg/QNSR_RESOLUTION;
}

// reset decoder
void reset_decoder() {
    write_pin(RST_PIN, GPIO_LOW);
    usleep(100);
    write_pin(RST_PIN, GPIO_HIGH);
    printf("Decoder register reseted!\n");
}

void buffer_detect(int now, int last, int *count){
    //underflow
    if ((now - last) > 30000)
    {
      *count = *count - 1;
    }    
    //overflow
    if ((now - last) < -30000)
    {
      *count = *count + 1;
    }          
}
