#!/usr/bin/env python

# Communication module
# Display the tension of the solar panel

import time
import serial

ser = serial.Serial(
        port='/dev/ttyS0', # ttyS0 for Pi3 and 0W - ttyAMA0 for other
        baudrate = 9600,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        bytesize=serial.EIGHTBITS,
        timeout=1
)

print "Serial Connection initialized"

while 1:
    #tensionValue=ser.readline()
    tensionValue = ser.read_until('\n')
    print tensionValue
    convertedTension = int(tensionValue)
#    convertedTension = convertedTension*3.1/1023
    print str(convertedTension) +"V"
    time.sleep(.5)

    