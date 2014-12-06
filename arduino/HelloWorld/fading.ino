long fading_previousMillis = 0;
long fading_interval = 30;
long fading_dir = 1; //1 : INC 0 : DEC
int fading_fadeValue = 0;

void fading_setup() {
}

void fading_loop() {
  unsigned long currentMillis = millis();
  if(currentMillis - fading_previousMillis > fading_interval) {
    // save the last time you blinked the LED 
    fading_previousMillis = currentMillis;
 
    if(fading_dir == 1) {
      fading_fadeValue += 5;
      if(fading_fadeValue > 255) {
        fading_dir = 0;
      }   
    }
    else if(fading_dir == 0) {
      fading_fadeValue -= 5;
      if(fading_fadeValue < 0) {
        fading_dir = 1;
      }   
    }
    analogWrite(6, fading_fadeValue);
  }
}
