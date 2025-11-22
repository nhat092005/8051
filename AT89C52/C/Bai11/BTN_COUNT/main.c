#include <REGX51.h>

void external1_isr(void) interrupt 2
{
    P2 = P2 + 1;
}

void main(void)
{
    IT1 = 1;
    EX1 = 1;
    EA = 1;

    P2 = 0x00;

    while (1)
    {
        // Main loop
    }
}