#include <stdio.h>
#include <stdlib.h>
#include "control.h"

void update_voltage(pid_control* pid, float error, double utime){
  pid->D_error = (pid->P_error - error)/utime;
  pid->P_error = error;
  pid->I_error += error;
  pid->voltage = 27*(pid->kp*pid->P_error + pid->kd*pid->D_error + pid->ki*pid->I_error)/180;
}

int save_pid(float kp, float ki, float kd){
   FILE *outfile;
   int result = 0;

   // open file for writing
   outfile = fopen("pid.dat", "w");
   if (outfile == NULL)
   {
       fprintf(stderr, "\nError opend file\n");
       exit (1);
   }

  struct pid_save pid = {kp, ki, kd};
  result = fwrite(&pid, sizeof(struct pid_save), 1, outfile);
  if(result == 0)
     printf("error writing file !\n");
  
  fclose (outfile);
  return 0;
}

int load_pid(float* kp, float* ki, float* kd){
  FILE *infile;
  struct pid_save pid;
  int result = 0;

  // Open person.dat for reading
  infile = fopen ("pid.dat", "r");
  if (infile == NULL)
  {
      fprintf(stderr, "\nError opening file\n");
      exit (1);
  }

  // read file contents till end of file
  result  = fread(&pid, sizeof(struct pid_save), 1, infile);
  if (!result)
    printf("error reading file\n");

  // close file
  fclose (infile);
  *kp = pid.kp;
  *ki = pid.ki;
  *kd = pid.kd;

  return 0;
}
