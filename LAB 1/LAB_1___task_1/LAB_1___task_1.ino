 /* 
 *  LAB 1
 *  (1/2/23) Rabu
 *  ALIFF HAIKAL
 */
 
int timer = 500; // The higher the number, the slower the timing.

void setup()// use a for loop to initialize each pin as an output
{
  for (int thisPin = 2; thisPin < 11; thisPin++)
  {
    pinMode(thisPin, OUTPUT);
  }
}

void loop ()// loop from the lowest pin to the highest
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
