#include <Arduino.h>

int speedControl = 3;
int value = 0;
int tempInput = A0;

void setup()
{
  pinMode(speedControl, OUTPUT);
}

void loop()
{
  value = analogRead(tempInput);
  analogWrite(speedControl, value / 4);
  delay(100);
}