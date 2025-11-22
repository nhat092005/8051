#include <REGX51.H>

sbit LED1 = P2 ^ 0;

void Delay(unsigned int ms)
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 123; j++)
            ;
}

void main(void)
{
    while (1)
    {
        LED1 = 0;   // Turn on LED
        Delay(500); // Delay 500 ms
        LED1 = 1;   // Turn off LED
        Delay(500); // Delay 500 ms
    }
}