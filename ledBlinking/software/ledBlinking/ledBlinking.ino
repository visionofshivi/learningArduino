#include <Arduino.h>

void setup()
{
  pinMode(13, OUTPUT);
  while (1)
  {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
};