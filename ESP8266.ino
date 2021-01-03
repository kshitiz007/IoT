#include <ESP8266WiFi.h>

const char* ssid="Your wifi ssid";
const char* password="Your wifi password";

int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);

  Serial.begin(115200);
  Serial.println();
  Serial.print("Wifi Connecting to ");
  Serial.println( ssid );
  WiFi.begin(ssid,password);

  Serial.println();
  Serial.print("Connecting");

  while(WiFi.status() != WL_CONNECTED ){
    delay(500);
    Serial.print(".");
    }
    digitalWrite(ledPin , HIGH);
    Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
