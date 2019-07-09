#! /bin/sh
### BEGIN INIT INFO
# Provides:          quanser-shield-export
# Required-Start:
# Should-Start:
# Required-Stop:
# Default-Start:     S
# Default-Stop:
# Short-Description: Configures GPIO and PWM for Lab 06.
# Description:       Configures GPIO and PWMfor Lab 06.
### END INIT INFO

case "$1" in
  start|restart|force-reload)
    #################################################
  	# IO0 - D0 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio11 ] ; then
  	    echo -n "11" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio11/direction

  	chgrp gpio /sys/class/gpio/gpio11/value
  	chmod g+r  /sys/class/gpio/gpio11/value

  	if [ ! -d /sys/class/gpio/gpio32 ] ; then
  	    echo -n "32" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio32/direction
  	echo -n "1" > /sys/class/gpio/gpio32/value

  	if [ ! -d /sys/class/gpio/gpio33 ] ; then
  	    echo -n "33" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio33/direction
  	echo -n "0" > /sys/class/gpio/gpio33/value


  	#################################################
  	# IO1 - D1 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio12 ] ; then
  	    echo -n "12" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio12/direction

  	chgrp gpio /sys/class/gpio/gpio12/value
  	chmod g+r  /sys/class/gpio/gpio12/value

  	if [ ! -d /sys/class/gpio/gpio28 ] ; then
  	    echo -n "28" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio28/direction
  	echo -n "1" > /sys/class/gpio/gpio28/value

  	if [ ! -d /sys/class/gpio/gpio29 ] ; then
  	    echo -n "29" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio29/direction
  	echo -n "0" > /sys/class/gpio/gpio29/value

  	if [ ! -d /sys/class/gpio/gpio45 ] ; then
  	    echo -n "45" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio45/direction
  	echo -n "0" > /sys/class/gpio/gpio45/value

  	#################################################
  	# IO2 - D2 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio13 ] ; then
  	    echo -n "13" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio13/direction
  	chgrp gpio /sys/class/gpio/gpio13/value
  	chmod g+r  /sys/class/gpio/gpio13/value

  	if [ ! -d /sys/class/gpio/gpio34 ] ; then
  	    echo -n "34" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio34/direction
  	echo -n "1" > /sys/class/gpio/gpio34/value

  	if [ ! -d /sys/class/gpio/gpio35 ] ; then
  	    echo -n "35" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio35/direction
  	echo -n "0" > /sys/class/gpio/gpio35/value

  	if [ ! -d /sys/class/gpio/gpio77 ] ; then
  	    echo -n "77" > /sys/class/gpio/export
  	fi
  	echo -n "0" > /sys/class/gpio/gpio77/value


  	#################################################
  	# IO3 - D3 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio14 ] ; then
  	    echo -n "14" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio14/direction
  	chgrp gpio /sys/class/gpio/gpio14/value
  	chmod g+r  /sys/class/gpio/gpio14/value

  	if [ ! -d /sys/class/gpio/gpio16 ] ; then
  	    echo -n "16" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio16/direction
  	echo -n "1" > /sys/class/gpio/gpio16/value

  	if [ ! -d /sys/class/gpio/gpio17 ] ; then
  	    echo -n "17" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio17/direction
  	echo -n "0" > /sys/class/gpio/gpio17/value

  	if [ ! -d /sys/class/gpio/gpio76 ] ; then
  	    echo -n "76" > /sys/class/gpio/export
  	fi
  	echo -n "0" > /sys/class/gpio/gpio76/value

  	if [ ! -d /sys/class/gpio/gpio64 ] ; then
  	    echo -n "64" > /sys/class/gpio/export
  	fi
  	echo -n "0" > /sys/class/gpio/gpio64/value


  	#################################################
  	# IO4 - D4 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio6 ] ; then
  	    echo -n "6" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio6/direction
  	chgrp gpio /sys/class/gpio/gpio6/value
  	chmod g+r  /sys/class/gpio/gpio6/value

  	if [ ! -d /sys/class/gpio/gpio36 ] ; then
  	    echo -n "36" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio36/direction
  	echo -n "1" > /sys/class/gpio/gpio36/value

  	if [ ! -d /sys/class/gpio/gpio37 ] ; then
  	    echo -n "37" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio37/direction
  	echo -n "0" > /sys/class/gpio/gpio37/value


  	#################################################
  	# IO5 - D5 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio0 ] ; then
  	    echo -n "0" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio0/direction
  	chgrp gpio /sys/class/gpio/gpio0/value
  	chmod g+r  /sys/class/gpio/gpio0/value

  	if [ ! -d /sys/class/gpio/gpio18 ] ; then
  	    echo -n "18" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio18/direction
  	echo -n "1" > /sys/class/gpio/gpio18/value

  	if [ ! -d /sys/class/gpio/gpio19 ] ; then
  	    echo -n "19" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio19/direction
  	echo -n "0" > /sys/class/gpio/gpio19/value

  	if [ ! -d /sys/class/gpio/gpio66 ] ; then
  	    echo -n "66" > /sys/class/gpio/export
  	fi
  	echo -n "0" > /sys/class/gpio/gpio66/value


  	#################################################
  	# IO6 - D6 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio1 ] ; then
  	    echo -n "1" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio1/direction
  	chgrp gpio /sys/class/gpio/gpio1/value
  	chmod g+r  /sys/class/gpio/gpio1/value

  	if [ ! -d /sys/class/gpio/gpio20 ] ; then
  	    echo -n "20" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio20/direction
  	echo -n "1" > /sys/class/gpio/gpio20/value

  	if [ ! -d /sys/class/gpio/gpio21 ] ; then
  	    echo -n "21" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio21/direction
  	echo -n "0" > /sys/class/gpio/gpio21/value

  	if [ ! -d /sys/class/gpio/gpio68 ] ; then
  	    echo -n "68" > /sys/class/gpio/export
  	fi
  	echo -n "0" > /sys/class/gpio/gpio68/value


  	#################################################
  	# IO7 - D7 ######################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio38 ] ; then
  	    echo -n "38" > /sys/class/gpio/export
  	fi
      echo -n "in" > /sys/class/gpio/gpio38/direction
  	chgrp gpio /sys/class/gpio/gpio38/value
  	chmod g+r  /sys/class/gpio/gpio38/value

  	if [ ! -d /sys/class/gpio/gpio39 ] ; then
  	    echo -n "39" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio39/direction
  	echo -n "0" > /sys/class/gpio/gpio39/value


  	#################################################
  	# IO8 - !RST ####################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio40 ] ; then
  	    echo -n "40" > /sys/class/gpio/export
  	fi
      echo -n "out" > /sys/class/gpio/gpio40/direction
  	chgrp gpio /sys/class/gpio/gpio40/value
  	chmod g+w  /sys/class/gpio/gpio40/value

      if [ ! -d /sys/class/gpio/gpio41 ] ; then
  	    echo -n "41" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio41/direction
  	echo -n "0" > /sys/class/gpio/gpio41/value


  	#################################################
  	# IO9 - !OE #####################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio4 ] ; then
  	    echo -n "4" > /sys/class/gpio/export
  	fi
      echo -n "out" > /sys/class/gpio/gpio4/direction
  	chgrp gpio /sys/class/gpio/gpio4/value
  	chmod g+w  /sys/class/gpio/gpio4/value

      if [ ! -d /sys/class/gpio/gpio22 ] ; then
  	    echo -n "22" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio22/direction
  	echo -n "0" > /sys/class/gpio/gpio22/value

  	if [ ! -d /sys/class/gpio/gpio23 ] ; then
  	    echo -n "23" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio23/direction
  	echo -n "0" > /sys/class/gpio/gpio23/value

  	if [ ! -d /sys/class/gpio/gpio70 ] ; then
  	    echo -n "70" > /sys/class/gpio/export
  	fi
  	echo -n "0" > /sys/class/gpio/gpio70/value


    #################################################
  	# IO10 - SEL ####################################
    #################################################
  	if [ ! -d /sys/class/gpio/gpio10 ] ; then
  	    echo -n "10" > /sys/class/gpio/export
  	fi
      echo -n "out" > /sys/class/gpio/gpio10/direction
  	chgrp gpio /sys/class/gpio/gpio10/value
  	chmod g+w  /sys/class/gpio/gpio10/value

  	if [ ! -d /sys/class/gpio/gpio26 ] ; then
  	    echo -n "26" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio26/direction
  	echo -n "0" > /sys/class/gpio/gpio26/value

  	if [ ! -d /sys/class/gpio/gpio27 ] ; then
  	    echo -n "27" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio27/direction


    #################################################
    # IO12 - SD #####################################
    #################################################
    if [ ! -d /sys/class/gpio/gpio15 ] ; then
        echo -n "15" > /sys/class/gpio/export
    fi
    echo -n "out" > /sys/class/gpio/gpio15/direction
    chgrp gpio /sys/class/gpio/gpio15/value
    chmod g+w  /sys/class/gpio/gpio15/value

    if [ ! -d /sys/class/gpio/gpio42 ] ; then
        echo -n "42" > /sys/class/gpio/export
    fi
    echo -n "out" > /sys/class/gpio/gpio42/direction
    echo -n "0" > /sys/class/gpio/gpio42/value

    if [ ! -d /sys/class/gpio/gpio43 ] ; then
        echo -n "43" > /sys/class/gpio/export
    fi
    echo -n "out" > /sys/class/gpio/gpio43/direction
    echo -n "0" > /sys/class/gpio/gpio43/value


  	#################################################
  	# IO11 = pwm9 ###################################
    #################################################
  	if [ ! -d /sys/class/pwm/pwmchip0/pwm9 ] ; then
  	    echo -n "9" > /sys/class/pwm/pwmchip0/export
  	fi

    if [ ! -d /sys/class/gpio/gpio24 ] ; then
  	    echo -n "24" > /sys/class/gpio/export
  	fi
    echo -n "out" > /sys/class/gpio/gpio24/direction

    if [ ! -d /sys/class/gpio/gpio25 ] ; then
        echo -n "25" > /sys/class/gpio/export
    fi

    if [ ! -d /sys/class/gpio/gpio72 ] ; then
        echo -n "72" > /sys/class/gpio/export
    fi
    echo -n "1" > /sys/class/gpio/gpio72/value

    echo '1000000' > /sys/class/pwm/pwmchip0/device/pwm_period
    echo '500000' > /sys/class/pwm/pwmchip0/pwm9/duty_cycle

  	chgrp pwm /sys/class/pwm/pwmchip0/device/pwm_period
  	chmod g+rw /sys/class/pwm/pwmchip0/device/pwm_period
  	chgrp pwm /sys/class/pwm/pwmchip0/pwm9/duty_cycle
  	chmod g+rw /sys/class/pwm/pwmchip0/pwm9/duty_cycle
  	chgrp pwm /sys/class/pwm/pwmchip0/pwm9/enable
  	chmod g+rw /sys/class/pwm/pwmchip0/pwm9/enable
  	
  	#################################################
  	# IO14 - LMT RIGHT ###############################
	#################################################
  	if [ ! -d /sys/class/gpio/gpio48 ] ; then
  	    echo -n "48" > /sys/class/gpio/export
  	fi
	echo -n "in" > /sys/class/gpio/gpio48/direction
  	chgrp gpio /sys/class/gpio/gpio48/value
  	chmod g+r  /sys/class/gpio/gpio48/value

  	if [ ! -d /sys/class/gpio/gpio49 ] ; then
  	    echo -n "49" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio49/direction
  	echo -n "0" > /sys/class/gpio/gpio49/value
  	
  	#################################################
  	# IO15 - LMT LEFT ###############################
	#################################################
  	if [ ! -d /sys/class/gpio/gpio50 ] ; then
  	    echo -n "50" > /sys/class/gpio/export
  	fi
	echo -n "in" > /sys/class/gpio/gpio50/direction
  	chgrp gpio /sys/class/gpio/gpio50/value
  	chmod g+r  /sys/class/gpio/gpio50/value

  	if [ ! -d /sys/class/gpio/gpio51 ] ; then
  	    echo -n "51" > /sys/class/gpio/export
  	fi
  	echo -n "out" > /sys/class/gpio/gpio51/direction
  	echo -n "0" > /sys/class/gpio/gpio51/value  	
  ;;
  stop)
    echo -n "11" > /sys/class/gpio/unexport
    echo -n "32" > /sys/class/gpio/unexport
    echo -n "33" > /sys/class/gpio/unexport

    echo -n "12" > /sys/class/gpio/unexport
    echo -n "28" > /sys/class/gpio/unexport
    echo -n "29" > /sys/class/gpio/unexport
    echo -n "45" > /sys/class/gpio/unexport

    echo -n "13" > /sys/class/gpio/unexport
    echo -n "34" > /sys/class/gpio/unexport
    echo -n "35" > /sys/class/gpio/unexport
    echo -n "77" > /sys/class/gpio/unexport

    echo -n "14" > /sys/class/gpio/unexport
    echo -n "16" > /sys/class/gpio/unexport
    echo -n "17" > /sys/class/gpio/unexport
    echo -n "76" > /sys/class/gpio/unexport
    echo -n "64" > /sys/class/gpio/unexport

    echo -n "6" > /sys/class/gpio/unexport
    echo -n "36" > /sys/class/gpio/unexport
    echo -n "37" > /sys/class/gpio/unexport

    echo -n "0" > /sys/class/gpio/unexport
    echo -n "18" > /sys/class/gpio/unexport
    echo -n "19" > /sys/class/gpio/unexport
    echo -n "66" > /sys/class/gpio/unexport

    echo -n "1" > /sys/class/gpio/unexport
    echo -n "20" > /sys/class/gpio/unexport
    echo -n "21" > /sys/class/gpio/unexport
    echo -n "68" > /sys/class/gpio/unexport

    echo -n "38" > /sys/class/gpio/unexport
    echo -n "39" > /sys/class/gpio/unexport

    echo -n "40" > /sys/class/gpio/unexport
    echo -n "41" > /sys/class/gpio/unexport

    echo -n "4" > /sys/class/gpio/unexport
    echo -n "22" > /sys/class/gpio/unexport
    echo -n "23" > /sys/class/gpio/unexport
    echo -n "70" > /sys/class/gpio/unexport

    echo -n "10" > /sys/class/gpio/unexport
    echo -n "26" > /sys/class/gpio/unexport
    echo -n "27" > /sys/class/gpio/unexport

    echo -n "15" > /sys/class/gpio/unexport
    echo -n "42" > /sys/class/gpio/unexport
    echo -n "43" > /sys/class/gpio/unexport

    echo -n "9" > /sys/class/pwm/pwmchip0/unexport
    echo -n "24" > /sys/class/gpio/unexport
    echo -n "25" > /sys/class/gpio/unexport
    echo -n "72" > /sys/class/gpio/unexport
	;;
  status)
  	echo -n Period:
  	cat /sys/class/pwm/pwmchip0/device/pwm_period
  	echo -n Duty Cicle:
  	cat /sys/class/pwm/pwmchip0/pwm1/duty_cycle
  	echo -n Enable:
  	cat /sys/class/pwm/pwmchip0/pwm1/enable
	;;
  *)
	echo -n "Usage: $0 "
	echo "{start|stop|restart|force-reload|status}"
	exit 1
	;;
esac

exit 0
