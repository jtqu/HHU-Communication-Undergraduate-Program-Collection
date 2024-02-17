#ifndef   _LCD_12864_H_
#define   _LCD_12864_H_

#include"C8051F360.h"


sbit SCLK=P3^3;     // LCD时钟信号线连接PB0口,P3.3        主板版本号：2012 3 28
sbit SID=P3^2;      // LCD数据信号线连接PB1口,P3.2


typedef unsigned char uc; 
typedef unsigned int ui; 

void LCDSendCommand(unsigned char command_data);
void LCDSendData(unsigned char command_data);
void LCD12864_Init(void);
void LcdDisplay12864(uc row,uc col,uc * str,bit onoff,ui data_input);
void Display_Char12864(uc row,uc col,uc *str,uc data_input);
void LcdDesppayInt(ui ui_data);
void DesppayChar(uc ui_data);
void DisplayChinese(uc row,uc col,uc cara_one,uc cara_two);

extern void Delay(unsigned int);

#endif