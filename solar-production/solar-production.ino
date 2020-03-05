/*
Transmit value by RX/TX?
*/
#include "SoftwareSerial.h"

const int solarPin = A1;                 // this is physical pin 1
const int Rx = 3;                       // this is physical pin 2
const int Tx = 4;                       // this is physical pin 3
String solarPanelTension;


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
  mySerial.println("solarPanelTension");
  
  /* Transmit Value via serial port */
  if (mySerial.available())
  {
    
    solarPanelTension = String(analogRead(solarPin), DEC); 

    //mySerial.print("AT+CIPSEND=9999\r\n");
//    delay(1000);
    //mySerial.print(solarPanelTension+"\r\n");
//    delay(1000);
    mySerial.println(solarPanelTension);
    delay(1000);
  }

}


/* Read solar Tension*/
int getSolarValue() {
    int tensionValue = analogRead(solarPin);
    return tensionValue;
}
