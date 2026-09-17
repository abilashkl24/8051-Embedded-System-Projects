 #include <reg51.h>
void delay();
void main()
{
	while(1)
	{
		P2 = 0x01;
		delay();
		P2 = 0x02;
		delay();
		P2 = 0x04;
		delay();
		P2 = 0x08;
		delay();
		P2 = 0x10;
		delay();
		P2 = 0x20;
		delay();
		P2 = 0x40;
		delay();
		P2 =  0x80;
		delay();
		P2 = 0x80;
		delay();
		P2 = 0x40;
		delay();
		P2 = 0x20;
		delay();
		P2 = 0x10;
		delay();
		P2 = 0x08;
		delay();
		P2 = 0x04;
		delay();
		P2 = 0x02;
		delay();
		P2 = 0x01;
		delay();
	}
}
void delay()
	{
		unsigned int i;
	
		for(i=0; i<=20000; i++);
	}