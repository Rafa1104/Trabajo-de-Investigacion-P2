#include <IRremote.h>

int orange = 5;
int yellow = 4;
int green = 3;
int blue = 2;
int sns_IR = 11;

IRrecv irrecv(sns_IR);
decode_results results;


void setup()
{
  pinMode(orange, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
  Serial.println("Enabled IRin");
}

void loop() {
  if (irrecv.decode(&results)) {
    unsigned int value = results.value;
    Serial.println(value);
    switch (value) {
      case 2295:
        digitalWrite(orange, HIGH);
        delay(500);
        digitalWrite(orange, LOW);
        break;

      case 34935:
        digitalWrite(yellow, HIGH);
        delay(500);
        digitalWrite(yellow, LOW);
        break;

      case 18615:
        digitalWrite(green, HIGH);
        delay(500);
        digitalWrite(green, LOW);
        break;

      case 10455:
        digitalWrite(blue, HIGH);
        delay(500);
        digitalWrite(blue, LOW);
    }


    irrecv.resume();
  }
}
