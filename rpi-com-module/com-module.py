#!/usr/bin/env python

# Communication module
# Display the tension of the solar panel

import time
import serial

ser = serial.Serial(
        port='/dev/ttyS0', #Replace ttyS0 with ttyAM0 for Pi1,Pi2,Pi0
        baudrate = 9600,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        bytesize=serial.EIGHTBITS,
        timeout=1
)

while 1:
    tensionValue=ser.readline()
    print tensionValue+' V',
    time.sleep(1)
    