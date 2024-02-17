#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display

const int analogInput = A0;
const int ledYellow = 3;
const int ledRed = 4;
const int buzzer = 12;

float vout = 0.0;
float vin = 0.0;
float R1 = 100000.0;
float R2 = 10000.0;
int value = 0;

void setup()
{
  pinMode (analogInput,INPUT);
  pinMode (ledYellow, OUTPUT);
  pinMode (ledRed, OUTPUT);
  pinMode (buzzer, OUTPUT);
  Serial.begin (9600);
  Serial.println ("DC voltmeter");
  
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Welcome nega"); 
  delay (3000);
  lcd.clear();
}

void loop()
{
  voltmeter();

  if(vin<10.6)
  {
    digitalWrite(ledYellow, LOW);
    //blinkRed();
  }

  else if(vin<11.5)
  {
    digitalWrite(ledRed, LOW);
    digitalWrite(buzzer, LOW);
    blinkYellow();
  }

  else
  {
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(buzzer, LOW);
  }
  
}

void voltmeter()
{
  value = analogRead(analogInput);
  vout = value * 5.0 / 1024.0;
  vin = vout / (R2/(R1+R2));
  if (vin<0.09)
  {
  vin = 0.0;
  }

  Serial.print("Input V= ");
  Serial.println(vin);
  delay(1);

  lcd.setCursor(6,0);
  lcd.print("DVM");
  lcd.setCursor(0,1);
  lcd.print("Vin=");
  lcd.setCursor(5,1);
  lcd.print(vin, 4);
  lcd.setCursor(16, 1);
  lcd.print("V");
  delay(10);
}

void blinkYellow()
{
  digitalWrite(ledYellow, HIGH);
  delay(500);
  digitalWrite(ledYellow, LOW);
  delay(500);
}
 
void blinkRed()
{
  digitalWrite(ledRed, HIGH);
  delay(500);
  digitalWrite(ledRed, LOW);
  delay(500);
  digitalWrite(buzzer, HIGH);
  delay(500);
}

void charge()
{
  lkkju
}