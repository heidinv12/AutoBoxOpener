#include <Servo.h>
const int TriggerPin = 2;
const int EchoPin = 3;
const int servoPin = 9;
int distance;
Servo servo;
int servoPost = 0;
int servoInit = 30;
int servoEnd = 135;

void setup() {
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  servo.attach(servoPin);
  servo.write(servoInit);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);
  distance = int(pulseIn(EchoPin, HIGH)/58.0); //in cm
  
  Serial.println(distance);
  if(distance>19){
    rotate();
  }
}

void rotate(){
  //Opens the lit of the box
  for(servoPost=servoInit; servoPost<=servoEnd; servoPost++){
    servo.write(servoPost);
    delay(10);
  }
  delay(10000);
  // Closes the lid of the box
  for(servoPost=servoEnd; servoPost>=servoInit; servoPost--){
    servo.write(servoPost);
    delay(10);
  }
}
