#include <string.h>
#include <galileo2io.h>

#include "gpio.h"

// configure the chosen pin
// pin: from 0 to 19
// res: GPIO_DOWN or GPIO_UP
// dir: DIR_OUT or DIR_IN
int set_pin(int pin, int res, int dir) {
  switch(pin) {
    case 0:
      pputs(EXPORT_PATH,"11");
      pputs((GPIO_CLASS_PATH"/gpio11/direction"), itoa(dir));
      pputs(GPIO_CLASS_PATH, "/gpio11/value", itoa(res));

      //Level Shifter GPIO L:dir_out H:dir_in
      pputs(EXPORT_PATH,"32");
      pputs(GPIO_CLASS_PATH"/gpio32/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"33");
      pputs(GPIO_CLASS_PATH"/gpio33/direction", GPIO_OUT);
      break;

    case 1:
      pputs(EXPORT_PATH,"12");
      pputs(GPIO_CLASS_PATH"/gpio12/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio12/value", itoa(res));

      pputs(EXPORT_PATH,"28");
      pputs(GPIO_CLASS_PATH"/gpio28/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"29");
      pputs(GPIO_CLASS_PATH"/gpio29/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"45");
      pputs(GPIO_CLASS_PATH"/gpio45/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio45/value", GPIO_DOWN);
      break;

    case 2:
      pputs(EXPORT_PATH,"13");
      pputs((GPIO_CLASS_PATH"/gpio13/direction"), itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio13/value", itoa(res));

      pputs(EXPORT_PATH,"34");
      pputs(GPIO_CLASS_PATH"/gpio34/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"35");
      pputs(GPIO_CLASS_PATH"/gpio35/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"77");
      pputs(GPIO_CLASS_PATH"/gpio77/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio77/value", GPIO_DOWN);

      break;

    case 3:
      pputs(EXPORT_PATH,"14");
      pputs(GPIO_CLASS_PATH"/gpio14/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio14/value", itoa(res));

      pputs(EXPORT_PATH,"16");
      pputs(GPIO_CLASS_PATH"/gpio16/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"17");
      pputs(GPIO_CLASS_PATH"/gpio17/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"76");
      pputs(GPIO_CLASS_PATH"/gpio76/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio76/value", GPIO_DOWN);
      break;

    case 4:
      pputs(EXPORT_PATH,"6");
      pputs(GPIO_CLASS_PATH"/gpio6/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio6/value", itoa(res));

      pputs(EXPORT_PATH,"36");
      pputs(GPIO_CLASS_PATH"/gpio36/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"37");
      pputs(GPIO_CLASS_PATH"/gpio37/direction", GPIO_OUT);
      break;

    case 5:
      pputs(EXPORT_PATH,"0");
      pputs(GPIO_CLASS_PATH"/gpio0/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio0/value", itoa(res));

      pputs(EXPORT_PATH,"18");
      pputs(GPIO_CLASS_PATH"/gpio18/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"19");
      pputs(GPIO_CLASS_PATH"/gpio19/direction", GPIO_OUT);
      
      pputs(EXPORT_PATH,"66");
      pputs(GPIO_CLASS_PATH"/gpio19/direction", GPIO_OUT);      
      pputs(GPIO_CLASS_PATH"/gpio19/value", GPIO_DOWN);
      break;

    case 6:
      pputs(EXPORT_PATH,"1");
      pputs(GPIO_CLASS_PATH"/gpio1/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio1/value", itoa(res));

      pputs(EXPORT_PATH,"20");
      pputs(GPIO_CLASS_PATH"/gpio20/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"21");
      pputs(GPIO_CLASS_PATH"/gpio21/direction", GPIO_OUT);
      
      pputs(EXPORT_PATH,"68");
      pputs(GPIO_CLASS_PATH"/gpio68/direction", GPIO_OUT);      
      pputs(GPIO_CLASS_PATH"/gpio68/value", GPIO_DOWN);
      break;

    case 7:
      pputs(EXPORT_PATH,"38");
      pputs(GPIO_CLASS_PATH"/gpio38/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio38/value", itoa(res));

      pputs(EXPORT_PATH,"39");
      pputs(GPIO_CLASS_PATH"/gpio39/direction", GPIO_OUT);
      break;

    case 8:
      pputs(EXPORT_PATH,"40");
      pputs(GPIO_CLASS_PATH"/gpio40/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio40/value", itoa(res));

      pputs(EXPORT_PATH,"41");
      pputs(GPIO_CLASS_PATH"/gpio41/direction", GPIO_OUT);
      break;

    case 9:
      pputs(EXPORT_PATH,"4");
      pputs(GPIO_CLASS_PATH"/gpio4/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio4/value", itoa(res));

      pputs(EXPORT_PATH,"22");
      pputs(GPIO_CLASS_PATH"/gpio22/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"23");
      pputs(GPIO_CLASS_PATH"/gpio23/direction", GPIO_OUT);
      
      pputs(EXPORT_PATH,"70");
      pputs(GPIO_CLASS_PATH"/gpio70/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio70/value", GPIO_DOWN);      
      break;

    case 10:
      pputs(EXPORT_PATH,"10");
      pputs(GPIO_CLASS_PATH"/gpio10/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio10/value", itoa(res));

      pputs(EXPORT_PATH,"26");
      pputs(GPIO_CLASS_PATH"/gpio26/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"27");
      pputs(GPIO_CLASS_PATH"/gpio27/direction", GPIO_OUT);
      
      pputs(EXPORT_PATH,"74");
      pputs(GPIO_CLASS_PATH"/gpio74/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio74/value", GPIO_DOWN); 
      break;

    case 11:
      pputs(EXPORT_PATH,"5");
      pputs(GPIO_CLASS_PATH"/gpio5/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio5/value", itoa(res));

      pputs(EXPORT_PATH,"24");
      pputs(GPIO_CLASS_PATH"/gpio24/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"25");
      pputs(GPIO_CLASS_PATH"/gpio25/direction", GPIO_OUT);
      
      pputs(EXPORT_PATH,"44");
      pputs(GPIO_CLASS_PATH"/gpio44/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio44/value", GPIO_DOWN);
      
      pputs(EXPORT_PATH,"72");
      pputs(GPIO_CLASS_PATH"/gpio72/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio72/value", GPIO_DOWN);       
      break;

    case 12:
      pputs(EXPORT_PATH,"15");
      pputs(GPIO_CLASS_PATH"/gpio15/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio15/value", itoa(res));

      pputs(EXPORT_PATH,"42");
      pputs(GPIO_CLASS_PATH"/gpio42/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"43");
      pputs(GPIO_CLASS_PATH"/gpio43/direction", GPIO_OUT);
      break;

    case 13:
      pputs(EXPORT_PATH,"7");
      pputs(GPIO_CLASS_PATH"/gpio7/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio7/value", itoa(res));

      pputs(EXPORT_PATH,"30");
      pputs(GPIO_CLASS_PATH"/gpio30/direction", GPIO_OUT);

      pputs(EXPORT_PATH,"31");
      pputs(GPIO_CLASS_PATH"/gpio31/direction", GPIO_OUT);
      
      pputs(EXPORT_PATH,"46");
      pputs(GPIO_CLASS_PATH"/gpio46/direction", GPIO_OUT);
      pputs(GPIO_CLASS_PATH"/gpio46/value", GPIO_DOWN);      
      break;

    case 14:
      pputs(EXPORT_PATH,"48");
      pputs(GPIO_CLASS_PATH"/gpio48/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio48/value", itoa(res));

      pputs(EXPORT_PATH,"49");
      pputs(GPIO_CLASS_PATH"/gpio49/direction", GPIO_OUT);
      break;

    case 15:
      pputs(EXPORT_PATH,"50");
      pputs(GPIO_CLASS_PATH"/gpio50/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio50/value", itoa(res));

      pputs(EXPORT_PATH,"51");
      pputs(GPIO_CLASS_PATH"/gpio51/direction", GPIO_OUT);
      break;

    case 16:
      pputs(EXPORT_PATH,"52");
      pputs(GPIO_CLASS_PATH"/gpio52/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio52/value", itoa(res));

      pputs(EXPORT_PATH,"53");
      pputs(GPIO_CLASS_PATH"/gpio53/direction", GPIO_OUT);
      break;

    case 17:
      pputs(EXPORT_PATH,"54");
      pputs(GPIO_CLASS_PATH"/gpio54/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio54/value", itoa(res));

      pputs(EXPORT_PATH,"55");
      pputs(GPIO_CLASS_PATH"/gpio55/direction", GPIO_OUT);
      break;

    case 18:
      pputs(EXPORT_PATH,"56");
      pputs(GPIO_CLASS_PATH"/gpio56/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio56/value", itoa(res));

      pputs(EXPORT_PATH,"57");
      pputs(GPIO_CLASS_PATH"/gpio57/direction", GPIO_OUT);
      break;

    case 19:
      pputs(EXPORT_PATH,"58");
      pputs(GPIO_CLASS_PATH"/gpio58/direction", itoa(dir));
      pputs(GPIO_CLASS_PATH"/gpio58/value", itoa(res));

      pputs(EXPORT_PATH,"59");
      pputs(GPIO_CLASS_PATH"/gpio59/direction", GPIO_OUT);
      break;

    default :
  }
  return 1
}
