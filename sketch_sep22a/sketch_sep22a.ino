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
  servo2.attach(7);
  servo3.attach(8);
}

void loop() {
  int reading = analogRead(A5);
  Serial.println(reading);
  int mapped_reading = map(reading, 0, 1200, 0, 180);
    
  servo1.write(mapped_reading);
  servo2.write(mapped_reading);
  servo3.write(mapped_reading);

  // if(reading > 900){
  //   servo1.write(30);
  //   servo2.write(30);
  //   servo3.write(30);
  //   Serial.println("on");
  // }else if(reading > 200){
  //   servo1.write(110);
  //   servo2.write(110);
  //   servo3.write(110);
  //   Serial.println("on");
  // }else{
  //   servo1.write(0);
  //   servo2.write(0);
  //   servo3.write(0);
  //   Serial.println("off");
  // }
  delay(50);
}
