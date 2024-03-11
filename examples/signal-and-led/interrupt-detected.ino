#include <Arduino.h>
#include "ESP32InterruptController.h"

void myInterruptHandler() {
    Serial.println("Interrupt detected!");
}

ESP32InterruptController *myInterrupt;

void setup() {
    Serial.begin(115200);
    // Pin 15 için bir interrupt oluşturur ve yükselen kenarda tetiklenmesini sağlar
    myInterrupt = new ESP32InterruptController(15, myInterruptHandler, RISING);
}

void loop() {
    // Ana döngüde başka işlemler yapılabilir
}
