#include <Servo.h>
int servo1Pin = 3;
int servo2Pin = 6;
Servo Servo1,Servo2;

void setup() 
{
  Servo1.attach(servo1Pin);
  Servo2.attach(servo2Pin);
}

void loop() 
{
  Servo1.write(0);
  delay(1000);
  Servo1.write(90);
  delay(1000);
  Servo1.write(180);
  delay(1000);

  Servo2.write(0);
  delay(1000);
  Servo2.write(90);
  delay(1000);
  Servo2.write(180);
  delay(1000);
}
