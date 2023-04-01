const int LEDpin = 8;  
const int photoPIN = A1;  
    
void setup() 
{  
  Serial.begin(9600);  
  pinMode(photoPIN, INPUT);  
  pinMode(LEDpin, OUTPUT);  
}  
void loop() 
{  
  
  int sensorStatus = analogRead(photoPIN);  
  if (sensorStatus <200)  
  {  
    digitalWrite(LEDpin, HIGH);  
    Serial.println(" LED is ON, status of sensor is DARK");  
  }  
  else  
  {  
    digitalWrite(LEDpin, LOW);  
    Serial.println(" ***************");  
  }  
}  