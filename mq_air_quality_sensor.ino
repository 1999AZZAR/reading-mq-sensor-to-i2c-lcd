#include <LiquidCrystal_I2C.h>
int sensorValue;
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{ 
  lcd.init();
  Serial.begin(9600);                           
}
void loop()
{
  sensorValue = analogRead(0);     
  Serial.print("AirQua=");
  Serial.print(sensorValue, DEC);             
  Serial.println(" PPM");
  lcd.setCursor(0, 0);
  lcd.print("ArQ=");
  lcd.print(sensorValue, DEC);
  lcd.print(" PPM");
  lcd.println("       ");
  lcd.print("  ");
  delay(100);                            
}
