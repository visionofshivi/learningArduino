#include <Arduino.h>

const int relayPin = 3;

void setup()
{
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    char data = Serial.read();
    digitalWrite(relayPin, data == 'A');
    delay(10);
  }
}
