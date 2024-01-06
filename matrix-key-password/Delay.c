#include "Delay.h"

#define _nop_() __asm NOP __endasm

//这次这个延时函数是准的
void Delay1ms(unsigned int xms) //@11.0592MHZ
{
    unsigned char i, j, k;

    _nop_();
    i = 7;
    j = 243;
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