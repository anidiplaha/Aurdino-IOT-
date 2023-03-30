void setup() 
{  
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
}

void loop() 
{
   digitalWrite(2, HIGH);
   digitalWrite(3, LOW);
   delay(1000); // Delay For a second
   digitalWrite(2, LOW);
   digitalWrite(3, High); 
   delay(1000); // Delay For a second
}