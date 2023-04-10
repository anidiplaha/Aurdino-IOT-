#include<RTClib.h>  
#include<TM1637Display.h>  

 
 #define CLK 8  
 #define DIO 9  
 RTC_DS3231 rtc;  
 TM1637Display display = TM1637Display(CLK, DIO); 
 
 void setup() 
  {  
  Serial.begin(9600);  
  delay(3000);  
  if (! rtc.begin()) 
  {  
   Serial.println("Couldn't find RTC");  
   while (1);  
  }  
  if (rtc.lostPower()) 
  {  
   Serial.println("RTC lost power, lets set the time!");   
   rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));  
  }   
  display.setBrightness(5);  
  display.clear();  
 }  
 void loop() 
{   
  DateTime now = rtc.now();  
  int displaytime = (now.hour() * 100) + now.minute();  
  Serial.println(displaytime);  
  display.showNumberDecEx(displaytime, 0b11100000, true);   
  delay(1000);  
  display.showNumberDec(displaytime, true);
  delay(1000);  
 }  