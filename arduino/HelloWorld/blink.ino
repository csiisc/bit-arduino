long blink_previousMillis = 0;
long blink_interval = 1000;

long blink_ledState = LOW;
void blink_setup() {
  pinMode(3, OUTPUT);
}

void blink_loop() {
  unsigned long currentMillis = millis();
  if(currentMillis - blink_previousMillis > blink_interval) {
    // save the last time you blinked the LED 
    blink_previousMillis = currentMillis;   

    // if the LED is off turn it on and vice-versa:
    if (blink_ledState == LOW)
      blink_ledState = HIGH;
    else
      blink_ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(3, blink_ledState);
  }
}
