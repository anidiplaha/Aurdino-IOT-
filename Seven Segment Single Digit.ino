#include <SevSeg.h>
SevSeg sevseg;
void setup()
{
      byte numDigits = 1;
      byte digitPins[] = {};
      byte segmentPins[] = {9,8, 7, 6, 5, 4, 3, 2};
      byte displayType = COMMON_CATHODE; 
      bool resistorsOnSegments = true; 
      sevseg.begin(displayType, numDigits, digitPins, segmentPins, resistorsOnSegments);
      sevseg.setBrightness(90);
}
void loop()
{
   for(int i = 0; i <= 10; i++)
   {
     if (i == 10)
{

 i = 0;
}
     sevseg.setNumber(i);
     sevseg.refreshDisplay();
     delay(1000);
   }
}