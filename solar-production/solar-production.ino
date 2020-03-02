/*
  Check the tension on the solar pannel and show the value on a display 2 lines (?)
*/

int solarTensionPin = 1;   // input of the solar tension

// Set pins for screen display
int sdaPin = 5;
int sclPin = 7;

// set pins for Communication Module
int antennaPin = 4;

int testPin = 3;
char message[] = "2 disp";

void setup() {
  // init analog input
  pinMode(testPin, OUTPUT);

  // init screen

  // Send info to Hub
  //sendMessage("Started Up");
  displayMessage ("starting up");
}

void loop() {


  // display a message on a screen

}
void displayMessage(char info[]) {
  digitalWrite(testPin, HIGH);  	//Set the LED pins to HIGH. This gives power to the LED and turns it on
  delay(500);  	// Wait for a half a second

  digitalWrite(testPin, LOW); 	// Set the LED pins to LOW. This turns it off
  delay(1000);    // Wait for a half second

}
void sendMessage(char info[]) {

}
