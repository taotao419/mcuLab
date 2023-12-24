#include "8051.h"
#include "main.h"
#define _nop_() __asm NOP __endasm


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

void main(){
    delay1ms(500);
    P2=0xfe;
    delay1ms(500);
    P2=0xfd;
    delay1ms(500);
    P2=0xfb;
    delay1ms(500);
    P2=0xf7;
    delay1ms(500);
    P2=0xef;
    delay1ms(500);
    P2=0xdf;
    delay1ms(500);
    P2=0xbf;
    delay1ms(500);
    P2=0x7F;
}