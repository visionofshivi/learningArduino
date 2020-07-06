#include <Arduino.h>
#include <Keypad.h>
#include <LiquidCrystal.h>

const byte rows = 4;
const byte cols = 3;

char keys[rows][cols] = {
    {'7', '8', '9'},
    {'4', '5', '6'},
    {'1', '2', '3'},
    {'*', '0', '#'},
};

const byte rowpins[rows] = {7, 6, 5, 4};
const byte colpins[cols] = {3, 2, 1};

Keypad kpd = Keypad(makeKeymap(keys), rowpins, colpins, rows, cols);

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  char data = kpd.getKey();
  if (data)
  {
    lcd.setCursor(0, 0);
    lcd.print(data);
    delay(10);
  }
}
