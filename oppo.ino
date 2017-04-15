void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  digitalWrite(3, 1);
  digitalWrite(5, 0);
  digitalWrite(9, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  delay(100);
  digitalWrite(3, 0);
  digitalWrite(5, 0);
  digitalWrite(9, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  delay(100);
  digitalWrite(3, 0);
  digitalWrite(5, 1);
  digitalWrite(9, 1);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  delay(100);
  digitalWrite(3, 0);
  digitalWrite(5, 0);
  digitalWrite(9, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  delay(100);
}
