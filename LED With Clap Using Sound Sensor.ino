int ledPin=3;
int sensorPin=5;
boolean val =0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
}
  
void loop ()
  {
  val =digitalRead(sensorPin);
  Serial.println (val);
  if (val==HIGH) 
  {
    digitalWrite(ledPin, HIGH);
  }
  else 
  {
    digitalWrite(ledPin, LOW);
  }
}