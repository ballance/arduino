// Drill 6: your hand-built circuit, now under computer control.
// Wire your LED circuit to pin 8 instead of the 5V pin, then upload.

const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
