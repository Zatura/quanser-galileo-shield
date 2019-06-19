/*
 * ============================================================================
 *
 *       Filename:  gpio_table.c
 *
 *    Description:  Main file of the project
 *
 *        Created:  17/06/2019
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
//#include <galileo2io.h>

#include "gpio.h"
#include "pputs.h"
#include "pgets.h"

// configure the chosen pin
// pin: from 0 to 19
// res: GPIO_LOW or GPIO_HIGH
// dir: DIR_OUT or DIR_IN
int set_pin(int pin, char*  res, char* dir) {
  switch(pin) {
    case 0:
      pputs(GPIO_EXPORT_PATH,"11");
      pputs(GPIO_CLASS_PATH"/gpio11/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio11/value", res);

      //Level Shifter GPIO L:dir_out H:dir_in
      pputs(GPIO_EXPORT_PATH,"32");
      pputs(GPIO_CLASS_PATH"/gpio32/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"33");
      pputs(GPIO_CLASS_PATH"/gpio33/direction", GPIO_OUT);
      break;

    case 1:
      pputs(GPIO_EXPORT_PATH,"12");
      pputs(GPIO_CLASS_PATH"/gpio12/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio12/value", res);

      pputs(GPIO_EXPORT_PATH,"28");
      pputs(GPIO_CLASS_PATH"/gpio28/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"29");
      pputs(GPIO_CLASS_PATH"/gpio29/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"45");
      pputs(GPIO_CLASS_PATH"/gpio45/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio45/value", GPIO_LOW);
      break;

    case 2:
      pputs(GPIO_EXPORT_PATH,"13");
      pputs((GPIO_CLASS_PATH"/gpio13/direction"), dir);
      pputs(GPIO_CLASS_PATH"/gpio13/value", res);

      pputs(GPIO_EXPORT_PATH,"34");
      pputs(GPIO_CLASS_PATH"/gpio34/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"35");
      pputs(GPIO_CLASS_PATH"/gpio35/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"77");
      pputs(GPIO_CLASS_PATH"/gpio77/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio77/value", GPIO_LOW);

      break;

    case 3:
      pputs(GPIO_EXPORT_PATH,"14");
      pputs(GPIO_CLASS_PATH"/gpio14/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio14/value", res);

      pputs(GPIO_EXPORT_PATH,"16");
      pputs(GPIO_CLASS_PATH"/gpio16/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"17");
      pputs(GPIO_CLASS_PATH"/gpio17/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"76");
      pputs(GPIO_CLASS_PATH"/gpio76/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio76/value", GPIO_LOW);
      break;

    case 4:
      pputs(GPIO_EXPORT_PATH,"6");
      pputs(GPIO_CLASS_PATH"/gpio6/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio6/value", res);

      pputs(GPIO_EXPORT_PATH,"36");
      pputs(GPIO_CLASS_PATH"/gpio36/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"37");
      pputs(GPIO_CLASS_PATH"/gpio37/direction", GPIO_OUT);
      break;

    case 5:
      pputs(GPIO_EXPORT_PATH,"0");
      pputs(GPIO_CLASS_PATH"/gpio0/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio0/value", res);

      pputs(GPIO_EXPORT_PATH,"18");
      pputs(GPIO_CLASS_PATH"/gpio18/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"19");
      pputs(GPIO_CLASS_PATH"/gpio19/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"66");
      pputs(GPIO_CLASS_PATH"/gpio19/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio19/value", GPIO_LOW);
      break;

    case 6:
      pputs(GPIO_EXPORT_PATH,"1");
      pputs(GPIO_CLASS_PATH"/gpio1/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio1/value", res);

      pputs(GPIO_EXPORT_PATH,"20");
      pputs(GPIO_CLASS_PATH"/gpio20/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"21");
      pputs(GPIO_CLASS_PATH"/gpio21/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"68");
      pputs(GPIO_CLASS_PATH"/gpio68/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio68/value", GPIO_LOW);
      break;

    case 7:
      pputs(GPIO_EXPORT_PATH,"38");
      pputs(GPIO_CLASS_PATH"/gpio38/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio38/value", res);

      pputs(GPIO_EXPORT_PATH,"39");
      pputs(GPIO_CLASS_PATH"/gpio39/direction", GPIO_OUT);
      break;

    case 8:
      pputs(GPIO_EXPORT_PATH,"40");
      pputs(GPIO_CLASS_PATH"/gpio40/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio40/value", res);

      pputs(GPIO_EXPORT_PATH,"41");
      pputs(GPIO_CLASS_PATH"/gpio41/direction", GPIO_OUT);
      break;

    case 9:
      pputs(GPIO_EXPORT_PATH,"4");
      pputs(GPIO_CLASS_PATH"/gpio4/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio4/value", res);

      pputs(GPIO_EXPORT_PATH,"22");
      pputs(GPIO_CLASS_PATH"/gpio22/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"23");
      pputs(GPIO_CLASS_PATH"/gpio23/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"70");
      pputs(GPIO_CLASS_PATH"/gpio70/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio70/value", GPIO_LOW);
      break;

    case 10:
      pputs(GPIO_EXPORT_PATH,"10");
      pputs(GPIO_CLASS_PATH"/gpio10/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio10/value", res);

      pputs(GPIO_EXPORT_PATH,"26");
      pputs(GPIO_CLASS_PATH"/gpio26/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"27");
      pputs(GPIO_CLASS_PATH"/gpio27/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"74");
      pputs(GPIO_CLASS_PATH"/gpio74/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio74/value", GPIO_LOW);
      break;

    case 11:
      pputs(GPIO_EXPORT_PATH,"5");
      pputs(GPIO_CLASS_PATH"/gpio5/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio5/value", res);

      pputs(GPIO_EXPORT_PATH,"24");
      pputs(GPIO_CLASS_PATH"/gpio24/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"25");
      pputs(GPIO_CLASS_PATH"/gpio25/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"44");
      pputs(GPIO_CLASS_PATH"/gpio44/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio44/value", GPIO_LOW);

      pputs(GPIO_EXPORT_PATH,"72");
      pputs(GPIO_CLASS_PATH"/gpio72/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio72/value", GPIO_LOW);
      break;

    case 12:
      pputs(GPIO_EXPORT_PATH,"15");
      pputs(GPIO_CLASS_PATH"/gpio15/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio15/value", res);

      pputs(GPIO_EXPORT_PATH,"42");
      pputs(GPIO_CLASS_PATH"/gpio42/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"43");
      pputs(GPIO_CLASS_PATH"/gpio43/direction", GPIO_OUT);
      break;

    case 13:
      pputs(GPIO_EXPORT_PATH,"7");
      pputs(GPIO_CLASS_PATH"/gpio7/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio7/value", res);

      pputs(GPIO_EXPORT_PATH,"30");
      pputs(GPIO_CLASS_PATH"/gpio30/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"31");
      pputs(GPIO_CLASS_PATH"/gpio31/direction", GPIO_OUT);

      pputs(GPIO_EXPORT_PATH,"46");
      pputs(GPIO_CLASS_PATH"/gpio46/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio46/value", GPIO_LOW);
      break;

    case 14:
      pputs(GPIO_EXPORT_PATH,"48");
      pputs(GPIO_CLASS_PATH"/gpio48/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio48/value", res);

      pputs(GPIO_EXPORT_PATH,"49");
      pputs(GPIO_CLASS_PATH"/gpio49/direction", GPIO_OUT);
      break;

    case 15:
      pputs(GPIO_EXPORT_PATH,"50");
      pputs(GPIO_CLASS_PATH"/gpio50/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio50/value", res);

      pputs(GPIO_EXPORT_PATH,"51");
      pputs(GPIO_CLASS_PATH"/gpio51/direction", GPIO_OUT);
      break;

    case 16:
      pputs(GPIO_EXPORT_PATH,"52");
      pputs(GPIO_CLASS_PATH"/gpio52/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio52/value", res);

      pputs(GPIO_EXPORT_PATH,"53");
      pputs(GPIO_CLASS_PATH"/gpio53/direction", GPIO_OUT);
      break;

    case 17:
      pputs(GPIO_EXPORT_PATH,"54");
      pputs(GPIO_CLASS_PATH"/gpio54/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio54/value", res);

      pputs(GPIO_EXPORT_PATH,"55");
      pputs(GPIO_CLASS_PATH"/gpio55/direction", GPIO_OUT);
      break;

    case 18:
      pputs(GPIO_EXPORT_PATH,"56");
      pputs(GPIO_CLASS_PATH"/gpio56/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio56/value", res);

      pputs(GPIO_EXPORT_PATH,"57");
      pputs(GPIO_CLASS_PATH"/gpio57/direction", GPIO_OUT);
      break;

    case 19:
      pputs(GPIO_EXPORT_PATH,"58");
      pputs(GPIO_CLASS_PATH"/gpio58/direction", dir);
      pputs(GPIO_CLASS_PATH"/gpio58/value", res);

      pputs(GPIO_EXPORT_PATH,"59");
      pputs(GPIO_CLASS_PATH"/gpio59/direction", GPIO_OUT);
      break;

    default:
      break;
  }
  return 0;
}

int write_pin(int pin, char*  value) {
  char data[2];
  strcpy(data,value);
  switch(pin) {
    case 0:
      pputs(GPIO_CLASS_PATH"/gpio11/value", data);
      break;

    case 1:
      pputs(GPIO_CLASS_PATH"/gpio12/value", data);
      break;

    case 2:
      pputs(GPIO_CLASS_PATH"/gpio13/value", data);
      break;

    case 3:
      pputs(GPIO_CLASS_PATH"/gpio14/value", data);
      break;

    case 4:
      pputs(GPIO_CLASS_PATH"/gpio6/value", data);
      break;

    case 5:
      pputs(GPIO_CLASS_PATH"/gpio0/value", data);
      break;

    case 6:
      pputs(GPIO_CLASS_PATH"/gpio1/value", data);
      break;

    case 7:
      pputs(GPIO_CLASS_PATH"/gpio38/value", data);
      break;

    case 8:
      pputs(GPIO_CLASS_PATH"/gpio40/value", data);
      break;

    case 9:
      pputs(GPIO_CLASS_PATH"/gpio4/value", data);
      break;

    case 10:
      pputs(GPIO_CLASS_PATH"/gpio10/value", data);
      break;

    case 11:
      pputs(GPIO_CLASS_PATH"/gpio5/value", data);
      break;

    case 12:
      pputs(GPIO_CLASS_PATH"/gpio15/value", data);
      break;

    case 13:
      pputs(GPIO_CLASS_PATH"/gpio7/value", data);
      break;

    case 14:
      pputs(GPIO_CLASS_PATH"/gpio48/value", data);
      break;

    case 15:
      pputs(GPIO_CLASS_PATH"/gpio50/value", data);
      break;

    case 16:
      pputs(GPIO_CLASS_PATH"/gpio52/value", data);
      break;

    case 17:
      pputs(GPIO_CLASS_PATH"/gpio54/value", data);
      break;

    case 18:
      pputs(GPIO_CLASS_PATH"/gpio56/value", data);
      break;

    case 19:
      pputs(GPIO_CLASS_PATH"/gpio58/value", data);
      break;

    default:
      break;
  }
  return 0;
}

char* read_pin(int pin, char* str_pin_data) {
  char str_path[150];
  switch(pin) {
    case 0:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio11/value");
      pgets(str_pin_data, sizeof(str_pin_data),(char*)str_path);
      break;

    case 1:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio12/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 2:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio13/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 3:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio14/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 4:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio6/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 5:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio0/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 6:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio1/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 7:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio38/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 8:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio40/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 9:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio4/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 10:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio10/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 11:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio5/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 12:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio15/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 13:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio7/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 14:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio48/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 15:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio50/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 16:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio52/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 17:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio54/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 18:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio56/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    case 19:
      snprintf((char*)str_path, sizeof(str_path), GPIO_CLASS_PATH"/gpio58/value");
      pgets(str_pin_data, sizeof(str_pin_data),str_path);
      break;

    default:
      break;
  }
  return str_pin_data;
}
