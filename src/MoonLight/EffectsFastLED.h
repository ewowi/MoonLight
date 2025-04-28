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

// #pragma once

// #include <Arduino.h>

// class FireMatrixEffect: public Node {
//   public:
  
//   uint8_t speed = 128;
//   uint8_t palette = 0;

//   void getControls(JsonArray controls) override {
//     JsonObject control;
//     control = controls.add<JsonObject>(); control["name"] = "speed"; control["type"] = "range"; control["default"] = 128; control["value"] = speed;
//   }

//   void setControl(JsonObject control) override {
//     ESP_LOGD(TAG, "%s = %s", control["name"].as<String>().c_str(), control["value"].as<String>().c_str());
//     if (control["name"] == "speed") speed = control["value"];
//   }

//   const char * name() override {return "Lissajous";}
//   uint8_t dim() override {return _1D;}
//   const char * tags() override {return "💡";}

//   void setup() override {}

//   void loop() override;

//   CRGBPalette16 getPalette();
// };