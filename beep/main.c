#include "8051.h"
#include "main.h"

typedef unsigned char u8;

#define _nop_() __asm NOP __endasm
#define BEEP P2_5

void main()
{
    unsigned int  i = 2000;
    while (1)
    {
        while (i--)
        {
            BEEP = !BEEP;
            delay1ms(1);
        }
        i=0;
        BEEP=0;
    }
}

void delay1ms(unsigned int  xms) //@11.0592MHZ
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
            while (--k);

        } while (--j);

    } while (--i);
}