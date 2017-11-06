#include <dht.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);


dht DHT;

#define DHT11_PIN A0

void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("HI I AM THIBOT");
  delay(4000);
  lcd.clear();
  lcd.print("I WILL UPDATE ");
  delay(2000);
  lcd.clear();
   lcd.print("TEMPERATURE");
   lcd.setCursor(0,1);
   lcd.print("and HUMIDITY ");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("UPDATING...");
  delay(2000);
 
}

void loop()
{
 
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
 lcd.setCursor(0,0);
 lcd.print("TEMP = ");
 lcd.print(DHT.temperature);
 lcd.print(" 'C");
 lcd.setCursor(0,1);
 
 lcd.print("HUMID = ");
 lcd.print(DHT.humidity);
 lcd.print(" RH");
 


}
