int LeftMotorForward = 3;
int LeftMotorReverse = 2;
int RightMotorForward = 4;
int RightMotorReverse = 5;
int leftIR = A0;
int rightIR = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(LeftMotorForward,OUTPUT);
  pinMode(LeftMotorReverse,OUTPUT); 
  pinMode(RightMotorForward,OUTPUT);
  pinMode(RightMotorReverse,OUTPUT);
  pinMode(leftIR,INPUT);
  pinMode(rightIR,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if( analogRead(leftIR) < 500 && analogRead(rightIR) < 500 ) //Forward
  {
    digitalWrite(LeftMotorForward,HIGH);
    digitalWrite(RightMotorForward,HIGH);
  }

  else if( analogRead(leftIR) < 500 && analogRead(rightIR) >= 500 ) //Right Turn
  {
    digitalWrite(LeftMotorForward,HIGH);
    digitalWrite(RightMotorForward,LOW);
  }

  else if( analogRead(leftIR) >= 500 && analogRead(rightIR) < 500 ) //Left Turn
  {
    digitalWrite(LeftMotorForward,LOW);
    digitalWrite(RightMotorForward,HIGH);
  }

  else //Stop
  {
    digitalWrite(LeftMotorForward,LOW);
    digitalWrite(RightMotorForward,LOW);
  }

  delay(1);
}
