
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
  pinMode(leftIR,INPUT);
  analogWrite(LeftMotorForward,150);
  analogWrite(RightMotorForward,150);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(analogRead(leftIR) < 500 && analogRead(rightIR) < 500)
  {
    analogWrite(LeftMotorForward,150);
    analogWrite(RightMotorForward,150);
  }

  else if(analogRead(leftIR) < 500 && analogRead(rightIR) >= 500)
  {
    analogWrite(LeftMotorForward,150);
    analogWrite(RightMotorForward,LOW);
  }

  else if(analogRead(leftIR) >= 500 && analogRead(rightIR) < 500)
  {
    analogWrite(LeftMotorForward,LOW);
    analogWrite(RightMotorForward,150);
  }

  
  {
    analogWrite(LeftMotorForward,LOW);
    analogWrite(RightMotorForward,LOW);
  }

  delay(1);

}
