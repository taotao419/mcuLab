#include "8051.h"
#include "main.h"
#define NIXIE P0
#define _nop_() __asm NOP __endasm

unsigned char nixieTable[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7f, 0x6F};

void NixieShowNum(unsigned char location, unsigned int number)
{
    switch (location)
    {
    case 1:
        P2_4 = 1;
        P2_3 = 1;
        P2_2 = 1;
        break;
    case 2:
        P2_4 = 1;
        P2_3 = 1;
        P2_2 = 0;
        break;
    case 3:
        P2_4 = 1;
        P2_3 = 0;
        P2_2 = 1;
        break;
    case 4:
        P2_4 = 1;
        P2_3 = 0;
        P2_2 = 0;
        break;
    case 5:
        P2_4 = 0;
        P2_3 = 1;
        P2_2 = 1;
        break;
    case 6:
        P2_4 = 0;
        P2_3 = 1;
        P2_2 = 0;
        break;
    case 7:
        P2_4 = 0;
        P2_3 = 0;
        P2_2 = 1;
        break;
    case 8:
        P2_4 = 0;
        P2_3 = 0;
        P2_2 = 0;
        break;
    default:
        break;
    }
    NIXIE = nixieTable[number];
    Delay1ms(100);
    NIXIE=0x00;
}

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
            while (--k) ;

        } while (--j);

    } while (--i);
}

void main()
{

    while (1)
    {
        NixieShowNum(4, 8);
        NixieShowNum(5, 8);
        NixieShowNum(6, 8);
    }
}