void setup()
{
   pinMode(3, OUTPUT);               
   pinMode(4, OUTPUT);         
}

void loop()                                         
{
   digitalWrite(3, HIGH);                
   tone(4, 1000, 250);              
   delay(2000);                                  
   digitalWrite(3, LOW);               
   tone(4, 6000, 250);             
   delay(2000);                                
}