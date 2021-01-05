//Header File

#include <SimpleDHT.h>
#include <LiquidCrystal.h>

// Initialize Pin & LCD

const int pinDHT11 = 2;
SimpleDHT11 dht11;
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup() {
 
  Serial.begin(9600);
  lcd.begin(16, 2);
  Serial.print("Temperature & Humidity Data");
}

void loop() {
  
  //Create variable to store data
 
  byte temperature = 0;
  byte humidity = 0;

  //Store the data in predefined variables
  
  dht11.read(pinDHT11, &temperature, &humidity, NULL);

  //To print Temperature
  
  lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" F ");  

  //To print Humidity
  
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print(" % "); 

  //To print data on Serial Monitor
  
  Serial.print("Temperature:");
  Serial.println(temperature);
  Serial.print("Humidity:");
  Serial.println(humidity);
  
  // Delay 1 second because DHT11 sampling rate is 1HZ.
 
  delay(1000);
}
