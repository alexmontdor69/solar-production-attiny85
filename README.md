# Check solar production with an ATTINY85
## Electronics for the remote module
The voltage read by the ATTiny85 ranges between 0 and 1023 (1023 being equal to Vcc). I suppose it is linear reading  : Vread = Vcc/1023*Reading

The solar panel produce up to 5.8V. Therefore the voltage to be read need to be brought down to around 3V (under Vcc). 2 resistor will be installed and the pin A1 will be taken the measure (0 to 5.8/2 = 2.8V)

## Communication module

See corresponding branch

The communication module is working between 3.3V and 5V. So the remote module could be powered with:

- 3 batteries types AA or AAA => 3x1.5V = 4.5V

- 1 battery type 18650 => goes between 4.2V and 2.5V


## Installment
### Compililation
A .hex file is require and is obtained with the use or ArduinoIDE

### flash the ATTiny85

AVRDUDE is required to flas the ATTiny 85 with a raspberry pi (zero W version ??)

commandline to install AVRDUDE

The AVR conf file is included in this repo
/conf

To flash
On linux ./solar-install.sh


### Documentation about the ATTINY85

http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-2586-AVR-8-bit-Microcontroller-ATtiny25-ATtiny45-ATtiny85_Datasheet-Summary.pdf
https://www.instructables.com/id/Arduino-ISP-to-ATTiny85/
https://www.youtube.com/watch?v=npSwLOMfstY&t=535s

### Documentation about the Communication module GT38
https://abra-electronics.com/wireless/wireless-wifi-en/wl-si4438-gt-38-si4438-4463-uart-interface-wireless-communication-module.html