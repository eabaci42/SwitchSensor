#ifndef ESP32InterruptController_h
#define ESP32InterruptController_h

#include <Arduino.h>

class ESP32InterruptController {
public:
    ESP32InterruptController(int pin, void (*callback)(), int mode = RISING); // Constructor
    ~ESP32InterruptController(); // Destructor

    void enable();  // Enable interrupt
    void disable(); // Disable interrupt

private:
    int pin;           // Pin number
    void (*callback)(); // Callback function pointer
    int mode;          // Interrupt mode
};

#endif
