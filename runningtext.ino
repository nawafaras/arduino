#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int i=0;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  
  for (i=0; i<8; i++)
  {
    lcd.setCursor(i,0);
    lcd.print("  DIKA");
    lcd.setCursor(i,1);
    lcd.print("18116021");
    delay(250);
    lcd.clear();
  }
  for (i=8; i>0; i--)
  {
    lcd.setCursor(i,0);
    lcd.print("  DIKA");
    lcd.setCursor(i,1);
    lcd.print("18116021");
    delay(250);
    lcd.clear();
  }
}
 