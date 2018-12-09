
int mosPins[] = {7, 8, 9, 10, 11, 12, 13};

void setup() {
  Serial.begin (9600);
  for (int i = 0; i < 7; i++) {
    pinMode(mosPins[i], OUTPUT);  
  }
  setAllMotors(0);
}


void loop() {
  //int distance = getDistance('r');
  //Serial.println(distance) /setAllMotors(250);
 // delay(5000);
  int randomSpeed = random(50, 250);
  setOneRandomMotor(randomSpeed);
  delay(100);
  
  //setAllMotors(250);
  //delay(1000);

 //  if(distance < 70){
  //  delay(distance * 10);
 //  }
}

void setOneRandomMotor(int motorSpeed) {
  int randMotor = random(7);
  analogWrite(mosPins[randMotor], motorSpeed);
  //Serial.println(randMotor);
}
void setAllMotors(int motorSpeed){
  for (int i = 0; i < 7; i++) {
    analogWrite(mosPins[i], motorSpeed);  
  }
}
/*
int getDistance(char side){
  int trigPin;
  int echoPin;
  if(side == 'l'){
    trigPin = trigPinL;
    echoPin = echoPinL;
  }
  if(side == 'r'){
    trigPin = trigPinR;
    echoPin = echoPinR;
  }
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  return distance;
}
*/