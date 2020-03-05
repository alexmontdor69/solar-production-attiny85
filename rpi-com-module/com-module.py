#!/usr/bin/env python

# Communication module
# Display the tension of the solar panel

import time
import serial
import re    

ser = serial.Serial(
        port='/dev/ttyS0', # ttyS0 for Pi3 and 0W - ttyAMA0 for other
        baudrate = 9600,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        bytesize=serial.EIGHTBITS,
        timeout=1
)

print "Serial Connection initialized"

def is_number_repl_isdigit(s):
    """ Returns True is string is a number. """
    return s.replace('.','',1).isdigit()

while 1:
    tensionValue=ser.readline()
    
    if is_number_repl_isdigit(tensionValue):
        convertedTension = int(tensionValue)
        convertedTension = convertedTension*3.1/1023
        print str(convertedTension) +"V"
        else
        print tensionValue

    time.sleep(.5)
