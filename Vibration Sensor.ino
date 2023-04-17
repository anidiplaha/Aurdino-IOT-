void setup() 
{
  pinMode(5,INPUT);
  pinMode(8,OUTPUT);
}

void loop() 
{
  int val;
  val=digitalRead(5);
  if(val==1)
  {
    digitalWrite(8,HIGH);
    delay(1000);
    digitalWrite(8,LOW);
    delay(1000);
   }
   else
   digitalWrite(8,LOW);
}