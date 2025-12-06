int mq9DigitalPin = 3;
int ledPin = 13;
void setup() {
  pinMode(mq9DigitalPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("MQ9 Digital Output Test");
}

void loop() {
  int gasDetected = digitalRead(mq9DigitalPin);

  if (gasDetected == LOW) {
    Serial.println("GAS DETECTED!");
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}

