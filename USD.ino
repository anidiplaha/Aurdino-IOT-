long duration;
int distance;
void setup() 
{
  pinMode(3, OUTPUT); 
  pinMode(4, INPUT); 
  Serial.begin(9600); 
}
void loop() 
{
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(10);
  digitalWrite(3, LOW);
  duration = pulseIn(4, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
}