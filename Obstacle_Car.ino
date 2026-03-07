#include <Servo.h>
Servo servo;  
#define trigPin 12
#define echoPin 13

// Motor driver pins
#define ENA 3
#define IN1 8
#define IN2 9
#define ENB 2
#define IN3 10
#define IN4 11

long duration;
int distance;
int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;  // Convert to cm
  return distance;
}

void moveForward() 
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() 
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() 
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() 
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() 
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void setup() 
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  analogWrite(ENA, 200); // Speed control
  analogWrite(ENB, 200);
  servo.attach(4);
  servo.write(90); // Face forward
  delay(1000);
}

void loop() 
{
  servo.write(90);
  delay(200);
  int distanceCenter = getDistance();

  if (distanceCenter < 20) {  // Obstacle detected
    stopCar();
    delay(300);
    servo.write(30);  // Look left
    delay(400);
    int distanceLeft = getDistance();

    servo.write(150); // Look right
    delay(400);
    int distanceRight = getDistance();

    servo.write(90);
    delay(200);

    if (distanceLeft > distanceRight) {
      turnLeft();
      delay(500);
    } else {
      turnRight();
      delay(500);
    }
  } 
  else 
  {
    moveForward();
  }

  delay(50);
}
