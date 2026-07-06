const int firstLed = 8;
const int secondLed = 9;
const int thirdLed = 10;

void setup() {
  pinMode(firstLed, OUTPUT);
  pinMode(secondLed, OUTPUT);
  pinMode(thirdLed, OUTPUT);

  digitalWrite(firstLed, LOW);
  digitalWrite(secondLed, LOW);
  digitalWrite(thirdLed, LOW);

  randomSeed(analogRead(A0));
}

void loop() {
  digitalWrite(firstLed, random(0, 2));
  digitalWrite(secondLed, random(0, 2));
  digitalWrite(thirdLed, random(0, 2));

  delay(random(100, 1001));
}
