const int button = 2;
const int led = 8;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {

  // The button pin reads LOW when pressed (see the README for why!)
  if (digitalRead(button) == LOW) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

}
