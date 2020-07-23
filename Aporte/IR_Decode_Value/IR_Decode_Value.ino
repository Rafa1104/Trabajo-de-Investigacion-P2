
/*

  The circuit:
   LCD RS pin to digital pin 12
   LCD Enable pin to digital pin 11
   LCD D4 pin to digital pin 5
   LCD D5 pin to digital pin 4
   LCD D6 pin to digital pin 3
   LCD D7 pin to digital pin 2
   LCD R/W pin to ground
   LCD VSS pin to ground
   LCD VCC pin to 5V
   10K resistor:
   ends to +5V and ground
   wiper to LCD VO pin (pin 3)

*/

#include <IRremote.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int IRPIN = 7;

IRrecv irrecv(IRPIN);
decode_results result;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  Serial.println("Enabling IRin");
  lcd.setCursor(0, 0);
  lcd.print("Enabling IRin...");
  irrecv.enableIRIn();
  delay(500);
  lcd.clear();
  Serial.println("Enabled IRin");
  lcd.print("Enabled IRin");
  delay(500);
  lcd.setCursor(0, 0);
  lcd.print("IR Decode Value");

}

void loop()
{
  if (irrecv.decode(&result))
  {
    Serial.println(result.value, HEX);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("IR Decode Value");
    lcd.setCursor(0, 1);

    lcd.print(result.value, HEX);
    irrecv.resume();
  }
  delay(500);
}
