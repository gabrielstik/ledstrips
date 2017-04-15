void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop() {
    digitalWrite(3, 0);
    digitalWrite(9, 0);
    digitalWrite(6, 1);
    delay(100);
    digitalWrite(3, 0);
    digitalWrite(9, 1);
    digitalWrite(6, 0);
    delay(100);
    digitalWrite(3, 0);
    digitalWrite(9, 1);
    digitalWrite(6, 1);
    delay(100);
    digitalWrite(3, 1);
    digitalWrite(9, 0);
    digitalWrite(6, 0);
    delay(100);
    digitalWrite(3, 1);
    digitalWrite(9, 0);
    digitalWrite(6, 1);
    delay(100);
    digitalWrite(3, 1);
    digitalWrite(9, 1);
    digitalWrite(6, 0);
    delay(100);
}
