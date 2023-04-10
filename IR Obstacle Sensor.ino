int val = 0 ;  
 void setup()  
 {  
 Serial.begin(9600); 
 pinMode(2,INPUT);  
 pinMode(6,OUTPUT);  
 pinMode(7,OUTPUT);  
 }  
 void loop()  
 {  
 val = digitalRead(2);  
 Serial.println(val);   
 delay(500);  
 if(val == 1 )  
 {  
 digitalWrite(6,HIGH);  
 digitalWrite(7,HIGH);  
 }  
 else  
 {  
 digitalWrite(6,LOW);  
 digitalWrite(7,LOW); 
 }  
 }  