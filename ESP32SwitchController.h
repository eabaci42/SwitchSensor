#ifndef ESP32SwitchController_h
#define ESP32SwitchController_h

#include <Arduino.h>

class ESP32SwitchController {
public:
    ESP32SwitchController(int pin, void (*callback)(), int mode = RISING); // Constructor
    ~ESP32SwitchController(); // Destructor

    void enable();  // Enable interrupt
    void disable(); // Disable interrupt

private:
    int pin;           // Pin number
    void (*callback)(); // Callback function pointer
    int mode;          // Interrupt mode
};

#endif
