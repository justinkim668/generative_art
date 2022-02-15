/*
  This sketch is the same as the Font_Demo_1 example, except the fonts in this
  example are in a FLASH (program memory) array. This means that processors
  such as the STM32 series that are not supported by a SPIFFS library can use
  smooth (anti-aliased) fonts.
*/

/*
  There are four different methods of plotting anti-aliased fonts to the screen.

  This sketch uses method 1, using tft.print() and tft.println() calls.

  In some cases the sketch shows what can go wrong too, so read the comments!

  The font is rendered WITHOUT a background, but a background colour needs to be
  set so the anti-aliasing of the character is performed correctly. This is because
  characters are drawn one by one.

  This method is good for static text that does not change often because changing
  values may flicker. The text appears at the tft cursor coordinates.

  It is also possible to "print" text directly into a created sprite, for example using
  spr.println("Hello"); and then push the sprite to the screen. That method is not
  demonstrated in this sketch.

*/

//  A processing sketch to create new fonts can be found in the Tools folder of TFT_eSPI
//  https://github.com/Bodmer/TFT_eSPI/tree/master/Tools/Create_Smooth_Font/Create_font

//  This sketch uses font files created from the Noto family of fonts:
//  https://www.google.com/get/noto/

#include "NotoSansBold15.h"
#include "NotoSansBold36.h"

// The font names are arrays references, thus must NOT be in quotes ""
#define AA_FONT_SMALL NotoSansBold15
#define AA_FONT_LARGE NotoSansBold36

#include <SPI.h>
#include <TFT_eSPI.h>       // Hardware-specific library

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
