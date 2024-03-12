#include <Arduino.h>
#include "ESP32SwitchController.h"

void myInterruptHandler() {
    Serial.println("Interrupt detected!");
}

ESP32InterruptController *myInterrupt;

void setup() {
    Serial.begin(115200);
    // Pin 15 için bir interrupt oluşturur ve yükselen kenarda tetiklenmesini sağlar
    myInterrupt = new ESP32SwitchController(15, myInterruptHandler, RISING);
}

void loop() {
    // Ana döngüde başka işlemler yapılabilir
}
