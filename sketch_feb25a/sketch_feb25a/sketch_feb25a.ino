#include <LiquidCrystal.h>
LiquidCrystal lcd (4, 5, 9, 10, 11,);

#include <Servo.h>
int servo1Pin = 3;
int servo2Pin = 6;
Servo Servo1,Servo2;

void setup() 
{
  lcd.begin(16,2);
  lcd.clear();
  Servo1.attach(servo1Pin);
  Servo2.attach(servo2Pin);
}


void loop() 
{
  //0degree(1)
  Servo1.write(0);
  lcd.setCursor(1,0);
  lcd.print("SERVO1 0");
  lcd.setCursor(11,0);
  lcd.print
  (char(223));
  delay(1000);
  lcd.clear();

  //90degree(1)
  Servo1.write(90);
  lcd.setCursor(1,0);
  lcd.print("SERVO1 90");
  lcd.setCursor(11,0);
  lcd.print(char(223));
  delay(1000);
  lcd.clear();
  
  //180degree(1)
  Servo1.write(180);
  lcd.setCursor(1,0);
  lcd.print("SERVO1 180");
  lcd.setCursor(11,0);
  lcd.print(char(223));
  delay(1000);
  lcd.clear();

  
  Servo2.write(0);
  lcd.setCursor(1,0);
  lcd.print("SERVO2 0");
  lcd.setCursor(11,0);
  lcd.print(char(223));
  delay(1000);
  lcd.clear();

  Servo2.write(90);
  delay(1000);
  Servo2.write(180);
  delay(1000);
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
