#include "ESP32SwitchController.h"

ESP32SwitchController::ESP32SwitchController(int pin, void (*callback)(), int mode) {
    this->pin = pin;
    this->callback = callback;
    this->mode = mode;
    pinMode(pin, INPUT);
    attachInterrupt(digitalPinToInterrupt(pin), callback, mode);
}

ESP32SwitchController::~ESP32SwitchController() {
    detachInterrupt(digitalPinToInterrupt(pin));
}

void ESP32SwitchController::enable() {
    attachInterrupt(digitalPinToInterrupt(pin), callback, mode);
}

void ESP32SwitchController::disable() {
    detachInterrupt(digitalPinToInterrupt(pin));
}
