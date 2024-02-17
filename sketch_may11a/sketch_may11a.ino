const int ir1 = 8; //ir kanan
const int ir2 = 9; //ir tkanan
const int ir3 = 11; //ir tkiri
const int ir4 = 12; //ir kiri

const int in1 = 4;
const int in2 = 3;
const int in3 = 2;
const int in4 = 1;
const int enA = 5; //motor kanan
const int enB = 6; // motor kiri

void setup()
{
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

  stp();
  delay(1000);
  fwd(); 
  delay(1600);
  stp();
  delay(500);
  turnLeft();
  delay(800);
  fwd(); 
  delay(450);
  stp();
  delay(500);
  turnRight();
  delay(900);
}

void loop()
{
  int getSensorValue();
  int ir1Val = digitalRead(ir1);
  int ir2Val = digitalRead(ir2);
  int ir3Val = digitalRead(ir3);
  int ir4Val = digitalRead(ir4);
  
  if (ir3Val == HIGH ) 
  {
    fwd();
  } 
  
  else if (ir2Val == HIGH) 
  {
    turnRight();
  } 
  
   else if (ir4Val == HIGH) 
  {
    turnLeft();
  } 
  
  else if (ir2Val == LOW && ir3Val == LOW && ir4Val == LOW) 
  {
    stp();
  } 
  
  else if (ir3Val == HIGH && ir2Val == HIGH) 
  {
    turnRight();
  } 
  
  else if (ir3Val == HIGH && ir4Val == HIGH) 
  {
    turnLeft();
  } 

  else if (ir2Val == HIGH && ir3Val == HIGH && ir4Val == HIGH) 
  {
    fwd();
  } 

  else 
  {
    
  }
}

void fwd() 
{
  digitalWrite(in1, HIGH); //motor left
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); //motor right
  digitalWrite(in4, LOW);
  analogWrite(enA, 150);
  analogWrite(enB, 190);
}

void stp()
{
  digitalWrite(in1, LOW); //motor left
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW); //motor right
  digitalWrite(in4, HIGH);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}

void turnRight() //to turn right
{
  digitalWrite(in1, HIGH); //motor left
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); //motor right
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 190);
}

void turnLeft() //to turn left
{
  digitalWrite(in1, HIGH); //motor left
  digitalWrite(in2, LOW);
  digitalWrite(in3,HIGH);//motor right
  digitalWrite(in4, LOW);
  analogWrite(enA, 150);
  analogWrite(enB, 0);
}
