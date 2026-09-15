#include <Servo.h>

const int trigPin = 9;
const int echoPin = 8;
Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(6);
}

void loop() {
  // Send a 10-microsecond trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo pulse duration
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance in centimeters
  int distance = duration * 0.034 / 2;

  // Move the servo based on distance
  if (distance < 30) {
    myServo.write(90);  // Move to 90 degrees if object is close (<30cm)
  } else {
    myServo.write(0);   // Move to 0 degrees if clear
  }
  
  delay(100);
}
