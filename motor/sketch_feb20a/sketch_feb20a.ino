const int enableA = 9;
const int input1 = 7;
const int input2 = 6;
const int input3 = 5;
const int input4 = 4;
const int enableB = 3;

void setup() 
{
  pinMode (enableA,OUTPUT);
  pinMode (input1,OUTPUT);
  pinMode (input2,OUTPUT);
  pinMode (input3,OUTPUT);
  pinMode (input4,OUTPUT);
  pinMode (enableB,OUTPUT);
}

void loop() 
{
  depan ();
  delay (300);
  berhenti ();
  delay (300);
}

void depan ()
{
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  analogWrite (enableA,200);
  analogWrite (enableB,200);
}

void belakang ()
{
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  analogWrite (enableA,200);
  analogWrite (enableB,200);
}

void berhenti ()
{
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  analogWrite (enableA,0);
  analogWrite (enableB,0);
}

void kanan ()
{
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  analogWrite (enableA,150);
  analogWrite (enableB,100);
}

void kiri ()
{
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  analogWrite (enableA,100);
  analogWrite (enableB,1500);
}

void pkanan ()
{
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  analogWrite (enableA,150);
  analogWrite (enableB,100);
}

void pkiri ()
{
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  digitalWrite (input1,LOW);
  digitalWrite (input1,HIGH);
  analogWrite (enableA,100);
  analogWrite (enableB,150);
}
