#include "8051.h"
#include "main.h"
#define _nop_() __asm NOP __endasm


void Delay1ms(unsigned int xms) //@11.0592MHZ
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

void main(){
    Delay1ms(500);
    P2=0xfe;
    Delay1ms(500);
    P2=0xfd;
    Delay1ms(500);
    P2=0xfb;
    Delay1ms(500);
    P2=0xf7;
    Delay1ms(500);
    P2=0xef;
    Delay1ms(500);
    P2=0xdf;
    Delay1ms(500);
    P2=0xbf;
    Delay1ms(500);
    P2=0x7F;
}