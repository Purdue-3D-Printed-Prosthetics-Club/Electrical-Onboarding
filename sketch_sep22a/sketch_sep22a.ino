#include <Servo.h>

// Parts
// 3 servos
// pressure sensor
// ~10Kohm resistors


Servo servo1;
Servo servo2;
Servo servo3;
int counter = 0;

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

  
  if (mapped_reading > 10){
    servo1.write(mapped_reading);
    servo2.write(mapped_reading);
    servo3.write(mapped_reading);
  }else{
    counter += 1;
  }

  if(counter >= 1){
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    counter = 0;
  }
  Serial.println(mapped_reading);

  delay(200);
}
