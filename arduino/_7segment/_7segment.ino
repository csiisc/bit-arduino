Servo servoMotor;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
  
  servoMotor.attach(10);
  servoMotor.write(0);
  delay(1000);
}

static int segment_table [10][8] {
  {1, 1, 1, 1, 1, 1, 0, 0}, //0
  {0, 0, 1, 1, 0, 0, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1, 0}, //2
  {0, 1, 1, 1, 1, 0, 1, 0}, //3
  {0, 0, 1, 1, 0, 1, 1, 0}, //4
  {0, 1, 1, 0, 1, 1, 1, 0}, //5
  {1, 1, 1, 0, 1, 1, 1, 0}, //6
  {0, 0, 1, 1, 1, 1, 0, 0}, //7
  {1, 1, 1, 1, 1, 1, 1, 0}, //8
  {0, 1, 1, 1, 1, 1, 1, 0} //9
};

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 10; i++) {
    Serial.println(i);
    for(int j = 0; j < 8; j++) {
      Serial.print(j);
      if(segment_table[i][j] == 1) {
        Serial.println("LOW");
        digitalWrite(j + 1, LOW);
      }
      else {
        Serial.println("HIGH");
        digitalWrite(j + 1, HIGH);
      }
    }
    delay(1000);
  }
  
  for(angle = 0; angle <= 179; angle++) {
    servoMotor.write(angle);
    delay(10);
  }
  delay(100);
  
  for(angle = 179; angle >= 0; angle--) {
    servoMotor.write(angle);
    delay(10);
  }
  delay(100);
}
