/*
LAB 1
(1/2/23) Rabu
ALIFF HAIKAL
*/

int timer = 100;
int masa = 500;
const int pB = 13;

void setup() 
{
  for (int thisPin = 2; thisPin < 11; thisPin++)
  {
    pinMode(thisPin, OUTPUT);
  }
  pinMode (pB,INPUT);
}

void loop() 
{
  if (digitalRead (pB) == HIGH)
  {
    tekanSuis ();
  }
  
  else
  {
    taskOne ();
  }
}

void tekanSuis ()
{
   for (int thisPin = 6; thisPin < 7; thisPin++)
   {
     digitalWrite (6,HIGH);
     digitalWrite (7,HIGH);
     delay (masa);
     digitalWrite (6,LOW);
     digitalWrite (7,LOW);
     delay (masa);
   }
}

void taskOne ()
{
   for (int thisPin = 2; thisPin < 11; thisPin++)
  {
    digitalWrite(thisPin, HIGH); // turn the pin on
    delay(timer);
    digitalWrite(thisPin, LOW); // turn the pin off
  }
  
  // loop from the highest pin to the lowest
  
  for (int thisPin = 11; thisPin >= 2; thisPin--)
  {
    digitalWrite(thisPin, HIGH); // turn the pin on
    delay(timer);
    digitalWrite(thisPin, LOW); // turn the pin off
  }
}

