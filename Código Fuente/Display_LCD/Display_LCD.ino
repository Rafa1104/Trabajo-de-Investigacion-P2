#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  lcd.begin(16, 2);
  lcd.print("Arquitectura de Computadores");

}
void loop() {

  lcd.setCursor(4, 1);
  lcd.print("Trabajo de Investigacion");

  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(350);
  }

}
