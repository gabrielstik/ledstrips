const int buttonPin = 2;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  int sensorValue = analogRead(A0);
  buttonState = digitalRead(buttonPin);
  float voltage = sensorValue;
  Serial.println(voltage);
  if (voltage >= 100
     ) {
      digitalWrite(11, 1);
      digitalWrite(5, 1);
      digitalWrite(9, 1);
  }
  else {
    digitalWrite(11, 0);
      digitalWrite(5, 0);
      digitalWrite(9, 0);
  }
}
