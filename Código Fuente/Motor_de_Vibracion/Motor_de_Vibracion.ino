
int motorV = 3;
int wiper = A5;

int wiperVal;
int pwm3;


void setup()
{
  Serial.begin(9600);
  pinMode(motorV, OUTPUT);

}

void loop()
{
  wiperVal = analogRead(wiper);

  pwm3 = map(wiperVal, 0, 1023, 0, 500);
  digitalWrite(motorV, pwm3);

}
