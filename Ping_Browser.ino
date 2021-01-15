#include <ESP8266WiFi.h> // Wifi Library
#include <ESP8266Ping.h> // Ping Library 

const char* ssid = "Mishra"; // Your Wifi Name
const char* password = "80043100"; // Wifi Password

const IPAddress remote_ip(8, 8, 8, 8); // Host IP

void setup() {
Serial.begin(115200);
delay(10);

// We start by connecting to a WiFi network

Serial.println();
Serial.println("Connecting to WiFi");

WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {
delay(100);
Serial.print(".");
}

Serial.println();
Serial.print("WiFi connected with ip ");
Serial.println(WiFi.localIP());

Serial.print("Pinging ip ");
Serial.println(remote_ip);

// Ping
if (Ping.ping(remote_ip)) {
Serial.println("Success!!");
} else {
Serial.println("Error :(");
}
}

void loop() {
// loop
}
