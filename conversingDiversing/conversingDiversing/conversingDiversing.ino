#include <Arduino.h>

const int leds[] = {2, 3, 4, 5, 6, 7};

void setup()
{
  for (int i = 0; i < 6; i++)
    pinMode(leds[i], OUTPUT);
}

void loop()
{
  for (int i = 0; i < 6; i++)
  {
    turnOnLeds(leds[i], leds[5 - i]);
    delay(500);
    turnOffLeds(leds[i], leds[5 - i]);
    delay(30);
  }
}

void turnOnLeds(int pin1, int pin2)
{
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
}

void turnOffLeds(int pin1, int pin2)
{
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
}