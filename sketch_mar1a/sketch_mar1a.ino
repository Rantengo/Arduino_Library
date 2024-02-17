const int trigPin = 10;
const int echoPin = 9;
int buzzer = 4;
int led = 2;
long duration;
int distance;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  ukur ();
  if ()
}

void ukur ()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  
  Serial.print("Distance: ");
  Serial.println(distance); 
  Serial.print("cm"); 
  delay (100);
}

void lampu()
{
  digitalWrite();
  digitalWrite();
  delay()
  digitalWrite();
  digitalWrite();
}

void bunyiLampu()
{
  digitalWrite();
  digitalWrite();
}