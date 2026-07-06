const int redLed = 10;
const int yellowLed = 9;
const int greenLed = 8;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {

  // Green light
  digitalWrite(greenLed, HIGH);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, LOW);
  delay(5000);

  // Yellow light
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(redLed, LOW);

  delay(2000);

  // Red light
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(5000);

  // Brief red-and-yellow transition
  digitalWrite(yellowLed, HIGH);
  delay(1000);

}

