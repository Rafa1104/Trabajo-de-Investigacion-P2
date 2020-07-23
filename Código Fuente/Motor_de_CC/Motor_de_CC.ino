int led = 2;
int motor = 3;
int wiper = A5;

int wiperVal;
int pwm3;
int ledBlnk;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(motor, OUTPUT);

}

void loop()
{
  wiperVal = analogRead(wiper);
  ledBlnk = map(wiperVal, 0, 1023, 0, 700);
  digitalWrite(led, HIGH);

  delay(ledBlnk);

  digitalWrite(led, LOW);

  delay(ledBlnk);

  pwm3 = map(wiperVal, 0, 1023, 255, 0);
  analogWrite(motor, pwm3);

}
