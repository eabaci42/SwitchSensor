#ifndef SWITCHSENSOR_H
#define SWITCHSENSOR_H

#include "Arduino.h"

class SwitchSensor {
  public:
    // Constructor takes pin number and mode (INPUT, INPUT_PULLUP) as arguments
    SwitchSensor(int pin, int mode) {
        pinMode(pin, mode);
        _pin = pin;
    }

    // Method to check if the switch is pressed
    bool isPressed() {
        return !digitalRead(_pin); // Assuming active low switch
    }

    // Optional: Method to attach interrupt for real-time switch status monitoring
    void attachInterrupt(void (*ISR)(void), int mode) {
        ::attachInterrupt(digitalPinToInterrupt(_pin), ISR, mode);
    }

  private:
    int _pin; // Pin number connected to the switch
};

#endif
