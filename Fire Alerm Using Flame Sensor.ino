int flame_detected;

void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, INPUT);
}

void loop()
{
  flame_detected = digitalRead(4);
  if (flame_detected == 1)
  {
    Serial.println("Fire! Fire! Aleart Everyone!!!");
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(7, LOW);
    delay(200);
  }
  else
  {
    Serial.println("No Denger!!");
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
  }
  delay(1000);
}

