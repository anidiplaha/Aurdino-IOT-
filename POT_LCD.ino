#include <LiquidCrystal.h>
int sensorValue = 0;

LiquidCrystal lcd(11, 10, 5, 4, 3, 2);

void setup() 
{
  pinMode(A0, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Starting System");
  delay(1000);
  lcd.clear();
  lcd.print("System On");
  delay(1500);  
  
lcd.clear();

}

void loop() 
{
lcd.setCursor(0,0);
lcd.print("  DIY Inventor");
    

  sensorValue = analogRead(A0);
  Serial.println(sensorValue);

lcd.setCursor(0,1);
lcd.print(sensorValue);
lcd.setCursor(4,1);
lcd.print("Sensor Value");
  

  delay(500);
  lcd.clear();
}