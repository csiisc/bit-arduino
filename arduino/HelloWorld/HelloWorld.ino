const int ledPin = 2;
void setup() {
  // put your setup code here, to run once:
/*  
  //pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
*/
  blink_setup();
  fading_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
/*  
  int i = 0, j = 0, k = 0;
  for(i = 0; i < 8; i++) {
    Serial.println(i, DEC);
    for(j = 0; j < 3; j++) {
      if(i & (1 << j)) {
        digitalWrite((j+1)*3, HIGH);
      }
      else {
        digitalWrite((j+1)*3, LOW);
      }
    }
    delay(1000);
  }
  
  for(j = 0; j < 3; j++) {
    digitalWrite((j+1)*3, LOW);
  }
  
  Serial.println("start bridge");
  for(j = 0; j < 3; j++) {
    for(k = 0; k < 255; k++) {
      analogWrite((j+1)*3, k);
      delay(4);
    }
    for(k = 255; k > 0; k--) {
      analogWrite((j+1)*3, k);
      delay(4);
    }
  }
*/
  blink_loop();
  fading_loop();
}
