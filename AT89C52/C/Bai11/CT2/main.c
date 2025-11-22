#include <REGX51.H>

void Delay(unsigned int ms)
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 123; j++)
            ;
}

void main()
{
    while (1)
    {
        P2 = 0xFE; 
        Delay(200);
        P2 = 0xFD;
        Delay(200);
        P2 = 0xFB;
        Delay(200);
        P2 = 0xF7;
        Delay(200);
        P2 = 0xEF;
        Delay(200);
        P2 = 0xDF;
        Delay(200);
        P2 = 0xBF;
        Delay(200);
        P2 = 0x7F;
        Delay(200);
    }
}