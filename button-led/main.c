#include "8051.h"

#define LED0 P2_0
#define LED1 P2_1
#define LED2 P2_2
#define LED3 P2_3
#define LED4 P2_4
#define LED5 P2_5
#define LED6 P2_6
#define LED7 P2_7

#define BUTTON P3_1

void main()
{
    while (1)
    {
        if (BUTTON == 0)
        {
            LED0 = 0; // enlighten LED0
            LED1 = 0; // enlighten LED1
            LED2 = 0; // enlighten LED2
            LED3 = 0; // enlighten LED3
            LED4 = 0; // enlighten LED4
            LED5 = 0; // enlighten LED5
            LED6 = 0; // enlighten LED6
            LED7 = 0; // enlighten LED7
        }
        else
        {
            LED0 = 1; 
            LED1 = 1; 
            LED2 = 1; 
            LED3 = 1;
            LED4 = 1;
            LED5 = 1;
            LED6 = 1;
            LED7 = 1;
        }
    }
}