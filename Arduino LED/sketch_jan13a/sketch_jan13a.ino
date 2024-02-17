// (13/1/23)

const int ledRed = 2;

void setup ()
{
  pinMode (ledRed,OUTPUT);   //LED
}

void loop ()
{
  digitalWrite (ledRed,HIGH);  //ON LED
  delay (500);
  digitalWrite (ledRed,LOW);   //OFF LED
  delay (500);
}