int timer = 500;
int setSeconds = 60;
const int buzer = 12;
const int pB = 13;

void setup()
{
  for (int thisPin = 2; thisPin < 12; thisPin++)
  {
    pinMode (thisPin,OUTPUT);
  }

  pinMode (buzer,OUTPUT);
  pinMode (pB,INPUT);
}

void loop() 
{
  if (digitalWrite (pB) == HIGH)
  {
    ledblink ();
  }
  else
  {
    optimusPrime ();
  }
}

void optimusPrime ()
{
  for (int thisPin = 2; thisPin < 12; thisPin++)

  {
    digitalWrite (thisPin,HIGH); //ON LED
    // for (int i = 0; i <= setSeconds; i++)
    // {
    //   delay (1000);
    // }

    digitalWrite (thisPin,LOW); //OFF LED
  }

  for (int thisPin = 11; thisPin >= 2; thisPin--)
  {
    digitalWrite (thisPin,HIGH); //ON LED
    delay (timer);
    digitalWrite (thisPin,LOW); //OFF LED
  }
}

void ledblink ()
{
  digitalWrite (8,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (buzer,HIGH);
  delay (1000);
  digitalWrite (8,LOW);
  digitalWrite (7,LOW);
  digitalWrite (buzer,LOW);
  delay (1000);
}