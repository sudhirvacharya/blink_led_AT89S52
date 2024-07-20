#include <REG51.h>

void delay(unsigned int count) {
    while(count--);
}

void main() {
    while(1) {
        P0 = 0xFF; // Turn on all pins on port 0
        delay(50000);

        P0 = 0x00; // Turn off all pins on port 0
        delay(50000);
    }
}
