#include <Arduino.h>
#include "HX711.h"

const int LOADCELL_DOUT_PIN = 4;
const int LOADCELL_SCK_PIN = 5;

HX711 scale;

void setup() {
  Serial.begin(57600);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  scale.set_scale(300);                      
  scale.tare();               
  Serial.println(scale.get_units(), 1);        
                                               
  Serial.println("Readings:");
}

void loop() {
  if (scale.is_ready()) {
    Serial.println("Weight detected: ")
    Serial.print(scale.get_units(), 2);
    Serial.println("g");
    delay(2500);
  }
}
