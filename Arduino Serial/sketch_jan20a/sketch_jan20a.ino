int i =0;

void setup() 
{
  Serial.begin (9600);
  Serial.println ("Embedded system 20/1/23");
  Serial.println ("while loop");
  do 
  {
    Serial.println (i);
    i++;
  }
  while (i < 10);
  {
    Serial.println (i);
    i++;
  }

void loop() 
{
  
}
