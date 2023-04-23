#include <LiquidCrystal.h>
const int rs=7, en=6, d4=5, d5=4, d6=3, d7=2;
 LiquidCrystal lcd (rs,en,d4, d5,d6,d7);
int buz = 8;  
const int aqsensor = A0;  of Arduino
int threshold = 250;
void setup() {
pinMode (buz,OUTPUT);
Arduino
pinMode (aqsensor,INPUT);  arduino
Serial.begin (9600);
rate of 9600
lcd.clear();
lcd.begin (16,4);
}
void loop() {
int ppm = analogRead(aqsensor);  ppm
Serial.print("Air Quality: ");  Serial.println(ppm);
lcd.setCursor(0,0);  lcd.print("Air Quality: ");  lcd.print(ppm);
If (ppm > threshold)
{
lcd.setCursor(1,1);  lcd.print("AQ Level HIGH");  Serial.println("AQ Level HIGH");  digitalWrite(buz,HIGH);
}
Else
{digitalWrite(buz,LOW);	//Turn off Buzzer  lcd.setCursor(1,1);
lcd.print ("AQ Level Good");  Serial.println("AQ Level Good");
}
delay (500);
}