/**
    @title     MoonLight
    @file      EffectsFastLED.h
    @repo      https://github.com/ewowi/MoonBase, submit changes to this file as PRs
    @Authors   https://github.com/ewowi/MoonBase/commits/main
    @Doc       https://ewowi.github.io/MoonBase/general/utilities/
    @Copyright © 2025 Github MoonBase Commit Authors
    @license   GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007
    @license   For non GPL-v3 usage, commercial licenses must be purchased. Contact moonmodules@icloud.com
**/

#include "EffectsFastLED.h"

#include "FastLED.h"
#include "fl/ui.h"
#include "fl/xymap.h"
#include "fx/time.h"

using namespace fl;

#define HEIGHT 100
#define WIDTH 100
#define SERPENTINE true
#define BRIGHTNESS 255

DEFINE_GRADIENT_PALETTE(firepal){
  // define fire palette
  0,   0,   0,   0,  // black
  32,  255, 0,   0,  // red
  190, 255, 255, 0,  // yellow
  255, 255, 255, 255 // white
};

DEFINE_GRADIENT_PALETTE(electricGreenFirePal){
  0,   0,   0,   0,  // black
  32,  0,   70,  0,  // dark green
  190, 57,  255, 20, // electric neon green
  255, 255, 255, 255 // white
};

DEFINE_GRADIENT_PALETTE(electricBlueFirePal) {
  0,   0,   0,   0,    // Black
  32,  0,   0,  70,    // Dark blue
  128, 20, 57, 255,    // Electric blue
  255, 255, 255, 255   // White
};


XYMap xyMap(HEIGHT, WIDTH, SERPENTINE);


// void FireMatrixEffect::loop() {
//     CRGBPalette16 myPal = getPalette();
//     uint32_t now = millis();
//     TimeWarp timeScale(0, 1.0f);
//     timeScale.setSpeed(speedY);
//     uint32_t y_speed = timeScale.update(now);
//     for (int i = 0; i < HEIGHT; i++) {
//         for (int j = 0; j < WIDTH; j++) {
//             uint8_t palette_index = getPaletteIndex(now, i, j, y_speed);
//             CRGB c = ColorFromPalette(myPal, palette_index, BRIGHTNESS);
//             int index = xyMap((HEIGHT - 1) - i, (WIDTH - 1) - j);
//             leds[index] = c;
//         }
//     }
//     layerV->setPixelColor(0, CRGB(0,0,0));
//   }

//   CRGBPalette16 FireMatrixEffect::getPalette() {
//     // get palette
//     switch (palette) {
//     case 0:
//         return firepal;
//     case 1:
//         return electricGreenFirePal;
//     case 2:
//         return electricBlueFirePal;
//     default:
//         return firepal;
//     }
//   }