const int LED = 3;
int cerah = 0;
int fade = 5;

void setup() 
{
  pinMode (LED,OUTPUT);
}

void loop() 
{
  analogWrite (LED, cerah);
  cerah = cerah + fade;

  if (cerah <= 0 || cerah >= 255)
  {
    fade = -fade;
  }

  delay (20);
}
