int trigPin = 9;
int echoPin = 10;
int led = 7;
int buzzer = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance=(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);

  if((distance<=10))
    {
      digitalWrite(led, HIGH);
      digitalWrite(buzzer, HIGH);
      }
        else if (distance>10)
        {
            digitalWrite(led, LOW);
            digitalWrite(buzzer, LOW);
          }
}
