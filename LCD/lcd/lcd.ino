#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(9, 8, 7, 6, 5, 4);

void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("Shivam Rajput");
  delay(100);
}