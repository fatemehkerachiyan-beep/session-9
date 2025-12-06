int pin = 2; 
volatile int state = LOW;
void setup() {
 pinMode(13, OUTPUT);
 pinMode(2,INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(pin), blink, CHANGE);
} 
void loop() { 
 digitalWrite(13, state);
 Serial.println(state);
}
void blink() { 
 state = !state;
}
