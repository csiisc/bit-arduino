void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);
  Serial.println(val);
  
  if(val <= 255) {
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
  }
  else if(val > 255 && val <= 511) {
    digitalWrite(3, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
  }
  else if(val > 511 && val <= 767) {
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
  }
  else {
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
  }
  
  //val = map(val, 0, 1023, 0, 255);
}
