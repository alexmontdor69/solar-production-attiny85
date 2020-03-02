#!/bin/bash
# Make solar-production
MCU="attiny85"
AVRDUDEMCU="t85"
AVRDUDE="/opt/avrdude/bin/avrdude"
AVRDUDECONF="/opt/avrdude/etc/avrdude.conf"
TARGET="solar-production.cpp"

#echo "sudo $AVRDUDE -p $AVRDUDEMCU -C $AVRDUDECONF -c linuxgpio - U flash:w:$TARGET.hex"
#sudo $AVRDUDE -p $AVRDUDEMCU -C $AVRDUDECONF -c linuxgpio - U flash:w:$TARGET.hex


set -x; 
sudo $AVRDUDE -p $AVRDUDEMCU -C $AVRDUDECONF -c linuxgpio - U flash:w:$TARGET.hex
+ set +x