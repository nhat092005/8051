#include <REGX52.H>

sbit LED1 = P1^1;

void delay_ms(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 123; j++); // Approximate delay for 1 ms at 12MHz
}

void main(void) {
    while (1) {
        LED1 = 1; // Turn on LED
        delay_ms(200); // Delay 200 ms
        LED1 = 0; // Turn off LED
        delay_ms(200); // Delay 200 ms
    }
}