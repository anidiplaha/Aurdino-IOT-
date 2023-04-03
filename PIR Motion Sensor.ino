int pirState = LOW; 
int val = 0;
void setup() 
{
pinMode(13, OUTPUT); 
pinMode(2, INPUT); 
Serial.begin(9600);
}
void loop() 
{
val = digitalRead(2); 
if (val == HIGH) 
{ 
digitalWrite(13, HIGH); 
if (pirState == LOW) 
{
Serial.println("Motion detected!");
pirState = HIGH;
}
} 
else 
{
digitalWrite(13, LOW); 
if (pirState == HIGH) 
{
Serial.println("Motion ended!");
pirState = LOW;
}
}
}