//include the header file
#include<LiquidCrystal.h>
LiquidCrystal lcd(7, 9, 10, 11, 12, 13);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
lcd.print("Satish Pandey!");
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0, 1);
lcd.print("Printed:)");
}
