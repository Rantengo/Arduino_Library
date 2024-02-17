const int buzer = 13;

void setup() 
{
  pinMode (buzer,OUTPUT);
}

void loop() 
{
  digitalWrite (buzer,HIGH);
  delay (1000);
  digitalWrite (buzer,LOW);
  delay (1000);
}
