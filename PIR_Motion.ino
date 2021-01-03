#define SIGNAL_PIN 2
#define OUTPUT_PIN 9
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SIGNAL_PIN, INPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SIGNAL_PIN)== HIGH){
    Serial.println("Movement Detected");
    tone (9, 400);
    delay (300);
    noTone (9);
    delay(300);
    tone(9, 400);
    delay (300);
    }
    else{
      Serial.println("No Movement Detected");
      noTone(9);
      }
      delay(100);
}
