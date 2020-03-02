int blinkPin = 3;

void setup()
{
  pinMode(blinkPin, OUTPUT);
}

void loop()
{
  digitalWrite(blinkPin, HIGH);
  delay(250);
  digitalWrite(blinkPin, LOW);
  delay(50);
}
