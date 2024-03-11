#include "ESP32InterruptController.h"

ESP32InterruptController::ESP32InterruptController(int pin, void (*callback)(), int mode) {
    this->pin = pin;
    this->callback = callback;
    this->mode = mode;
    pinMode(pin, INPUT);
    attachInterrupt(digitalPinToInterrupt(pin), callback, mode);
}

ESP32InterruptController::~ESP32InterruptController() {
    detachInterrupt(digitalPinToInterrupt(pin));
}

void ESP32InterruptController::enable() {
    attachInterrupt(digitalPinToInterrupt(pin), callback, mode);
}

void ESP32InterruptController::disable() {
    detachInterrupt(digitalPinToInterrupt(pin));
}
