#include "8051.h"
#include "LCD1602.h"
#include "Delay.h"

int Result=0;
void main()
{
    LCD_Init();
    while (1)
    {
        Result++;
        Delay1ms(1000);
        LCD_ShowNum(1, 1, Result, 3);
    }
}