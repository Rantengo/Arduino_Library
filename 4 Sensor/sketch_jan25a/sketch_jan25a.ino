const int s1 = 2;  //sensor 1
const int s2 = 3;  //sensor 2
const int s3 = 4;  //sensor 3
const int s4 = 5;  //sensor 4
const int ledLeft = 8;  //LED hijau
const int ledRight = 9;  //LED kuning

void setup ()
// suis active low
{
  pinMode (s1,INPUT_PULLUP);
  pinMode (s2,INPUT_PULLUP);
  pinMode (s3,INPUT_PULLUP);
  pinMode (s4,INPUT_PULLUP);
  pinMode (ledLeft,OUTPUT);
  pinMode (ledRight,OUTPUT);
}

void loop ()
{
  if(digitalRead (s2) == LOW && digitalRead (s3) == LOW)  // gerak depan
  {
    depan ();
  }
  // gerak kanan
  else if(digitalRead (s1) == LOW || digitalRead (s2) == LOW)  // gerak kanan
  {
    kanan ();
  }
  // gerak kiri
   else if(digitalRead (s3) == LOW || digitalRead (s4) == LOW)  // gerak kiri
  {
    kiri ();
  }
  // gerak simpang
  else if(digitalRead (s1) == LOW && digitalRead (s4) == LOW)  // gerak simpang
  {
    kiri ();
  }
  
  else
  {
    henti ();
  }
}

void depan ()
// gerak depan
{
  digitalWrite (ledLeft,HIGH);
  digitalWrite (ledRight,HIGH);
}

void kanan ()
// gerak kanan
{
  digitalWrite (ledLeft,LOW);
  digitalWrite (ledRight,HIGH);
}

void kiri ()
// gerak kiri
{
  digitalWrite (ledLeft,HIGH);
  digitalWrite (ledRight,LOW);
}

void henti ()
// berhenti
{
  digitalWrite (ledLeft,LOW);
  digitalWrite (ledRight,LOW);
}
