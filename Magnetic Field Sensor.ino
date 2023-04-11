#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
char ADCSHOW[5];
void setup()
{
lcd.begin(16, 2);
}

void loop()
{
lcd.print("FluxDensity");
lcd.setCursor(0, 1);
lcd.print("(in Gauss):");
String ADCVALUE = String((analogRead(A0)-515)/3.76);


                ADCVALUE.toCharArray(ADCSHOW, 5);
                lcd.print(ADCSHOW);
                lcd.print("G   ");
                lcd.setCursor(0, 0);
}

