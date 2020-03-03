/*
Transmit value by RX/TX?
*/
#include "SoftwareSerial.h"

const int solarPin = A0;                 // this is physical pin 1
const int Rx = 3;                       // this is physical pin 2
const int Tx = 4;                       // this is physical pin 3
int solarPanelTension = 0;

SoftwareSerial mySerial(Rx, Tx);
void setup()
{
  pinMode (solarPin, INPUT);
  pinMode(Rx, INPUT);
  pinMode(Tx, OUTPUT);

  mySerial.begin(9600);                 // send serial data at 9600 bits/sec 
  delay(100);
}

void loop()
{
  
/* Transmit Value via serial port */
  if (mySerial.available())
  {
    solarPanelTension = analogRead(solarPin);
    mySerial.println(solarPanelTension);
    delay(500);
  }

}


/* Read solar Tension*/
int getSolarValue() {
    int tensionValue = analogRead(solarPin);
    return tensionValue;
}
