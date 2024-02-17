const int trig = 10;
const int echo = 9;
const int pump = 2;
const int indicate = 3;
const int buzzer = 4;
long duration;
float distance;

void setup() 
{
  pinMode (trig,OUTPUT);
  pinMode (echo, INPUT);
  pinMode (pump,OUTPUT);
  pinMode (indicate,OUTPUT);
  pinMode (buzzer,OUTPUT);
  Serial.begin (9600);
}

void loop() 
{
  ultrasonic ();
  
  if (distance > 200)  //overflow
  {
    alarm();
  }
  else if (distance > 180)  //minimum
  {
    while (distance >= 30)  //maximum
    {
      digitalWrite (pump,HIGH);
      ultrasonic ();

      if (distance < 200)
      {
        alarm ();
        ultrasonic ();
      }
    }
    digitalWrite (pump,LOW);
  }
}

void ultrasonic ()
{
  digitalWrite (trig,LOW);
  delayMicroseconds (2);
  digitalWrite (trig,HIGH);
  delayMicroseconds (10);
  digitalWrite (trig,LOW);

  duration = pulseIn (echo, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print ("Distance: ");
  Serial.print (distance);
  Serial.println ("cm");
  delay(10);
}

void alarm ()
{
  digitalWrite (buzzer,HIGH);
  digitalWrite (indicate,HIGH);
  delay (300);
  digitalWrite (buzzer,LOW);
  digitalWrite (indicate,LOW);
  delay (300);
}
