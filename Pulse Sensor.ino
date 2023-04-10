#define USE_ARDUINO_INTERRUPTS true    
#include <PulseSensorPlayground.h>

const int PulseWire = 4;      
const int LED = 6;         
int Threshold = 550;           
                               

void setup() 
{  
  Serial.begin(9600);          
  pulseSensor.analogInput(PulseWire);  
  pulseSensor.blinkOnPulse(LED);       
  pulseSensor.setThreshold(Threshold);  
   if (pulseSensor.begin()) 
  {
    Serial.println("We created a pulseSensor Object !");  
  }
}

void loop() 
{
 int myBPM = pulseSensor.getBeatsPerMinute();  
                                               
if (pulseSensor.sawStartOfBeat()) 
{            
 Serial.println("♥  A HeartBeat Happened ! "); 
 Serial.print("BPM: ");                        
 Serial.println(myBPM);                        
  delay(20);                   
}