const int analogInput = A0;  // analog input
float vout = 0.0;
float vin = 0.0;
float R1 = 100000.0;
float R2 = 10000.0;
int value = 0;
int ledKuning = 4;
int ledMerah = 7;
int buzer = 10;

void setup() 
{
  pinMode (analogInput,INPUT);
  pinMode (ledKuning, OUTPUT);
  pinMode (ledMerah, OUTPUT);
  pinMode (buzer, OUTPUT);
  Serial.begin (9600);
  Serial.println ("DC voltmeter");
}

void loop() 
{
  value = analogRead (analogInput);
  vout = (value * 5.0) / 1024.0;   // formula byte data
  vin = vout / (R2/(R1+R2));  // v.divider rule
  if (vin<0.09)
  {
    vin=0.0;
  }
  Serial.print("INPUT V= ");
  Serial.println(vin);
  delay(1000);
  
  if (vin < 10.6 )
  {
    digitalWrite (ledMerah, HIGH);
    merah();
  }
  else if (vin < 11.5)
  {
    digitalWrite(ledKuning, HIGH);
    kuning();
  }
  else
  {
    digitalWrite(ledKuning, LOW);
    digitalWrite(ledMerah, LOW);
    digitalWrite(buzer, LOW);
  }
}

void kuning() 
{
  digitalWrite(ledKuning, HIGH);   
  delay(1000);                       
  digitalWrite(ledKuning, LOW);    
  delay(1000); 
}

void merah() 
{
  digitalWrite(ledMerah, HIGH); 
  digitalWrite(buzer, HIGH); 
  delay(1000);                       
  digitalWrite(ledMerah, LOW);
  digitalWrite(buzer, LOW);
  delay(1000); 
}
