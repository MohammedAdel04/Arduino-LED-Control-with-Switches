const int led1 =3;
const int led2 =5;
const int led3 =6;
const int led4 =7;
const int led5 =8;
const int led6 =9;
const int slide1 =10;
const int slide2 =11;
int read1;
int read2;
void setup()
{
  for(int i =3 ; i<=9 ; i+=2)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(led3,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(slide1,INPUT);
  pinMode(slide2,INPUT);
}

void loop()
{
  read1=digitalRead(slide1);
  read2=digitalRead(slide2);
  if(read1==HIGH)
  {
    digitalWrite(led5,HIGH);
    analogWrite(led6,128);
  }
  else
  {
    digitalWrite(led5,LOW);
    analogWrite(led6,LOW);
  }
  if(read2==HIGH)
  {
    digitalWrite(led3,HIGH);
    analogWrite(led1,128);
  }
  else
  {
    digitalWrite(led3,LOW);
    analogWrite(led1,LOW);
  }
}