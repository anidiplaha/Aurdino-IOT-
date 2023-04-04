#define SENSORPIN A3  

void setup() 
{
pinMode(SENSORPIN, INPUT); 
Serial.begin(9600);
}
 
void loop() 
{
float reading = analogRead(SENSORPIN); 
float square_ratio = reading / 1023.0; 
square_ratio = pow(square_ratio, 2.0); 
Serial.println(reading); 
delay(100); 
delay(100);  
Serialrial  
}
