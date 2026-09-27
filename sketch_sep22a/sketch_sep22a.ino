#include <Servo.h>

// Parts
// 3 servos
// pressure sensor
// ~10Kohm resistors


Servo servo1;
Servo servo2;
Servo servo3;

void setup() {
  Serial.begin(9600);
  servo1.attach(6);
  // servo2.attach(7);
  // servo3.attach(8);
}

void loop() {
  int reading = analogRead(A5);
  // if (reading != 0){
    Serial.println(reading);
  // }

  //Serial.print("hello World");
    
  if(reading > 200){
    servo1.write(110);
    // servo2.write(110);
    // servo3.write(90);
  }else{
    servo1.write(0);
    // servo1.write(0);
    // servo1.write(0);
  }
  delay(500);
}
