//Define or Initialize Pins

const int buzzerPin =12;
const int flamePin = 11;
int Flame = LOW;
int redled = 5;
int greenled = 6;

void setup() {
  
  //Buzzer Pin
  pinMode(buzzerPin, OUTPUT);

  //Led Pin
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);

  //Flame Pin
  pinMode(flamePin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  Flame = digitalRead(flamePin);

  //If Statement
  
  if(Flame == LOW)
  {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
    }
    else
    {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(redled, LOW);
    digitalWrite(greenled, HIGH); 
      }
}
