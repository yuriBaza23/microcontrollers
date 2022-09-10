void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);

  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);

  delay(450);
}