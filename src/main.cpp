/*
  -----------------------
  ElegantOTA - Demo Example
  -----------------------

  Skill Level: Beginner

  This example provides with a bare minimal app with ElegantOTA functionality.

  Github: https://github.com/ayushsharma82/ElegantOTA
  WiKi: https://docs.elegantota.pro

  Works with following hardware:
  - ESP8266
  - ESP32
  - RP2040 (with WiFi) (Example: Raspberry Pi Pico W)


  Important note for RP2040 users:
  - RP2040 requires LittleFS partition for the OTA updates to work. Without LittleFS partition, OTA updates will fail.
    Make sure to select Tools > Flash Size > "2MB (Sketch 1MB, FS 1MB)" option.
  - If using bare RP2040, it requires WiFi module like Pico W for ElegantOTA to work.

  -------------------------------

  Upgrade to ElegantOTA Pro: https://elegantota.pro

*/
#include <Arduino.h>
#include <SimpleOTA.h>

SimpleOTA *simpleOTA;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Test 5");
  simpleOTA = new SimpleOTA();
  simpleOTA->begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  simpleOTA->loop();
  delay(10);
}
