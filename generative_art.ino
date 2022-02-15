#include "NotoSansBold15.h"
#include "NotoSansBold36.h"

#define AA_FONT_SMALL NotoSansBold15
#define AA_FONT_LARGE NotoSansBold36

#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();


void setup(void) {

  Serial.begin(250000);

  tft.begin();

  tft.setRotation(0);
}


void loop() {
  //tft.loadFont(AA_FONT_LARGE);

  tft.fillScreen(TFT_BLACK);

  tft.setCursor(0, 0); // Set cursor at top left of screen

  tft.setTextWrap(true);
  tft.setRotation(0);
  tft.setTextColor(TFT_CYAN, TFT_BLACK);
  tft.println("Twinkle twinke little star");
  delay(1000);

  tft.setTextWrap(true);
  tft.setRotation(1);
  tft.setTextColor(TFT_PURPLE, TFT_BLACK);
  tft.println("How I wonder what you are");
  tft.setRotation(1);
  delay(1000);

  tft.setTextWrap(true);
  tft.setRotation(2);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.println("Up above a world so high");
  delay(1000);

  tft.setTextWrap(true);
  tft.setRotation(3);
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.println("Like a diamond in the sky");
  delay(1000);

  tft.setTextWrap(true);
  tft.setRotation(0);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.println("Twinkle twinke little star");
  delay(1000);

  tft.setTextWrap(true);
  tft.setRotation(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.println("How I wonder what you are");
  delay(1000);

}
