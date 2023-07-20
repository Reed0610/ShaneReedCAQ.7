#include "mbed.h"

DigitalOut led1(LED1); // LED1 is connected to pin PA_5
DigitalOut led2(LED2); // LED2 is connected to pin PB_14

int main() {
    while (1) {
        // Toggle LED1 every 2 seconds
        led1 = !led1;
        ThisThread::sleep_for(2s);

        // Toggle LED2 every 5 seconds
        led2 = !led2;
        ThisThread::sleep_for(5s);
    }
}
