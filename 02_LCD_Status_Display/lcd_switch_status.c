#include <reg51.h>
#define LCD P3
sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;
sbit SW = P3^2;
void model();
void cmd(unsigned char c);
void dat(unsigned char d);
void show(unsigned char *s);
void delay();
void main()
{
    model();
    while(1)
    {
        if(SW == 0)
        {
            cmd(0x01);          // Clear LCD
            cmd(0x80);          // First line
            show("SWITCH ON");
            delay();
        }
        else
        {
            cmd(0x01);
            cmd(0x80);
            show("SWITCH OFF");

            delay();
        }
    }
}

void model()
{
    cmd(0x38);      // 8-bit mode, 2 line
    cmd(0x0C);      // Display ON, cursor OFF
    cmd(0x06);      // Increment cursor
    cmd(0x01);      // Clear LCD
    cmd(0x80);      // First line
}

void cmd(unsigned char c)
{
    LCD = c;
    RS = 0;
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
    delay();
}

void dat(unsigned char d)
{
    LCD = d;
    RS = 1;
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
    delay();
}

void show(unsigned char *s)
{
    while(*s)
    {
        dat(*s);
        s++;
    }
}
void delay()
{
	unsigned int i;
	for(i=0; i<30000; i++);
}