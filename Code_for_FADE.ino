#define LED_PIN 3
#define POTENTIOMETER_PIN A2
void setup()
{
  pinMode(LED_PIN, OUTPUT);
}
void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  int brightness = potentiometerValue / 4;
  analogWrite(LED_PIN, brightness);
}
