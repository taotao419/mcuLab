#include "8051.h"
#include "main.h"

#define LED0 P2_0
#define _nop_() __asm NOP __endasm

void main()
{
    while (1)
    {
        LED0 = 0;
        delay1ms(500);
        LED0 = 1;
        delay1ms(500);
    }
}

void delay1ms(unsigned int xms) //@11.0592MHZ
{
    unsigned char i, j, k;

    _nop_();
    i = 2;
    j = 199;
    k = xms;
    do
    {
        do
        {
            while (--k)
                ;

        } while (--j);

    } while (--i);
}