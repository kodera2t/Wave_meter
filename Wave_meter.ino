#include <Wire.h>
#include <HT_SSD1306.h>  // Include the HT_SSD1306 library
//#include <SPI.h>  // Include SPI if you're using SPI



#define PIN_RESET 9  // Connect RST to pin 9
//#define PIN_DC    11  // Connect DC to pin 8
//#define PIN_CS    10 // Connect CS to pin 10
#define DC_JUMPER 0  // For I2C Communication - this pin pulled high by default
SSD1306 oled(PIN_RESET, DC_JUMPER);    // I2C declaration

int SCREEN_WIDTH = oled.getLCDWidth();
int SCREEN_HEIGHT = oled.getLCDHeight();
unsigned long time_1;
unsigned long interval = 3600000; //one hour interval
int disp;



void setup()
{
  Wire.begin();
  oled.begin();
  oled.clear(ALL);
  oled.display();
  oled.clear(ALL);
  oled.setFontType(1);
}


void loop()
{
  int fwd,rev;
  rev=analogRead(A0);
  delay(20);
  fwd=analogRead(A1);



    oled.setFontType(1);
    oled.setCursor(33, 32);
    oled.print("fwd:");
 //   oled.setCursor(33, 32);
 //   oled.print(fwd);
    delay(10);
      oled.setCursor(33, 50);
      oled.print("rev:");
 //   oled.setCursor(33, 50);
 //   oled.print(rev);

    oled.setFontType(4);
    oled.setCursor(70, 31);
    oled.print("    ");
    //oled.display();
    oled.setCursor(70, 31);

    oled.setCursor(70, 49);
    oled.print("    ");
    oled.setCursor(70, 49);

    oled.setFontType(2);
    oled.setCursor(70, 31);
    oled.print("  ");
    //oled.display();
    oled.setCursor(70, 31);
    oled.print(fwd);
     //   oled.display();
    oled.setCursor(70, 49);
    oled.print("  ");
    oled.setCursor(70, 49);
    oled.print(rev);


    
    oled.display();


 //   oled.display();







  delay(1000);

}






