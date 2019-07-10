/*
 * ============================================================================
 *
 *       Filename:  init.c
 *
 *    Description:  Init file of the project
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
#include <stdlib.h>
#include <math.h>
#include <signal.h>
//#include <galileo2io.h>
#include "decoder.h"
#include "gpio_table.h"
#include "motion.h"
#include "limit_switch.h"

void save_calibration(int decoder_value){
   int result = 0;
   FILE *outfile;	
   // open file for writing
   outfile = fopen("calibration.dat", "w");
   if (outfile == NULL)
   {
       fprintf(stderr, "\nError opend file\n");
       exit (1);
   }

  result = fwrite(&decoder_value, sizeof(int), 1, outfile);
  if(result == 0)
     printf("error writing file !\n");

  fclose (outfile);	
}

int load_calibration(){
  FILE *infile;
  int decoder_value = -1;
  int result = 0;

  // Open person.dat for reading
  infile = fopen ("calibration.dat", "r");
  if (infile == NULL)
  {
      fprintf(stderr, "\nError opening file\n");
      exit (1);
  }

  // read file contents till end of file
  result  = fread(&decoder_value, sizeof(int), 1, infile);
  if (!result)
    printf("error reading file\n");

  // close file
  fclose (infile);
  return decoder_value;
}
void calibrate() {
	int lmt_right = 0;
	int decoder_reg = 0;

	signal(SIGINT, signal_handler);
    reset_decoder();
    move(5);
    while(!lmt_right){
		lmt_right = read_limit_switch_right();
    }
    stop();
    decoder_reg = read_decoder();
    printf("\n");
    printf("DECODER_VALUE %d  \n", decoder_reg);
    printf("ANGLE %f rads\n", (float)2*M_PI*decoder_reg/QNSR_RESOLUTION);
    printf("ANGLE %f degrees\n", (float)360*decoder_reg/QNSR_RESOLUTION);

    save_calibration(decoder_reg);
}
