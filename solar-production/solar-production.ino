/*
Transmit value by RX/TX?
*/
#include "SoftwareSerial.h"

const int solarPin = 5;                 // this is physical pin 1
const int Rx = 3;                       // this is physical pin 2
const int Tx = 4;                       // this is physical pin 3
int solarPanelTension = 0;

SoftwareSerial mySerial(Rx, Tx);
void setup()
{
  pinMode(Rx, INPUT);
  pinMode(Tx, OUTPUT);
  mySerial.begin(9600);                 // send serial data at 9600 bits/sec 
}

void loop()
{
  solarPanelTension = getSolarValue();
/* Transmit Value via serial port */
  mySerial.println(solarPanelTension);
  delay(500);

}


/* Read solar Tension*/
int getSolarValue() {
    int tensionValue = analogRead(solarPin);
    return tensionValue;
}
