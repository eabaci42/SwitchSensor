#include "SwitchSensor.h"

// Constructor implementation
SwitchSensor::SwitchSensor(int pin, int mode) {
    pinMode(pin, mode);
    _pin = pin;
}

// isPressed method implementation
bool SwitchSensor::isPressed() {
    // Assuming the switch is active low
    return !digitalRead(_pin);
}

// attachInterrupt method implementation
void SwitchSensor::attachInterrupt(void (*ISR)(void), int mode) {
    ::attachInterrupt(digitalPinToInterrupt(_pin), ISR, mode);
}
