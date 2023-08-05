int M=0;
void setup()
{
  pinMode(8,INPUT);
 pinMode(9,INPUT);
 pinMode(10,OUTPUT);
}

void loop()
{
  if(digitalRead(8)==1)
  {
    M=M+10;
  }
  if(digitalRead(9)==1)
  {
     M=M-10;
  }
  analogWrite(10,M);
   delay(250);
}