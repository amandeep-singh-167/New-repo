// C++ code
//
#include <Adafruit_LiquidCrystal.h>

//int seconds = 0;

Adafruit_LiquidCrystal lcd(0);

void setup()
{
  lcd.begin(16, 2);
  lcd.setBacklight(1);
  
}

void loop()
{

  lcd.setCursor(0, 0);
  lcd.print("I LOVE YOU");
  // lcd.setCursor(0, 1);
  //lcd.print(seconds);
   //delay(1000);
  //seconds += 1;
}

// i have accessed this repo
