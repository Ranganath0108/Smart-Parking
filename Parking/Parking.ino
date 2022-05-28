#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

#define A 8
#define B 9
#define C 10


void setup() {

//input
pinMode(A, INPUT);
pinMode(B, INPUT);
pinMode(C, INPUT);
lcd.init();
lcd.clear();
lcd.backlight();
  
Serial.begin(9600); 
}

void loop() {
  
int valA;
int valB;
int valC;

// Reads 
valA = digitalRead(A);
valB = digitalRead(B);
valC = digitalRead(C);

Serial.println(valA);
Serial.println(valB);
Serial.println(valC);

lcd.setCursor(0,0);
lcd.print("SLOT");
lcd.setCursor(6,0);
lcd.print("A");
lcd.setCursor(9,0);
lcd.print("B");
lcd.setCursor(12,0);
lcd.print("C");
lcd.setCursor(6,1);
lcd.print(valA);
lcd.setCursor(9,1);
lcd.print(valB);
lcd.setCursor(12,1);
lcd.print(valC);

}
