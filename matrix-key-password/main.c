#include "8051.h"
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int Password;
unsigned int Count;

void main()
{
    LCD_Init();
    LCD_ShowString(1, 1, "Password:");
    while (1)
    {
        KeyNum = MatrixKey();
        if (KeyNum)
        {
            // 如果 S1~S10 按键按下, 输入密码
            if (KeyNum <= 10)
            {
                if (Count < 4)
                {
                    Password *= 10;
                    Password += KeyNum % 10;
                    Count++;
                }
                LCD_ShowNum(2, 1, Password, 4);
            }

            if (KeyNum == 11)
            {
                if (Password==2345)
                {
                    LCD_ShowString(1,14,"OK");
                }else{
                    LCD_ShowString(1,14,"ERR");
                }
            }
        }
    }
}