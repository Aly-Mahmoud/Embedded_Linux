/*
 * Task_1.c
 *
 * Created: 13-Dec-23 10:18:51 AM
 * Author : alyma
 */ 

 #include "./Include/Bit_Math.h" 
 #include "./Include/DIO.h"
 #include "./Include/Delay_ms.h"
 #include "./Include/PORT.h"


int main(void)
{

	PORT_vidInit();
	
	while(1) /*for repetition of the program*/
	{
		
		DIO_enumSetPin( DIO_enumPortA, DIO_enumPin0, DIO_enumLogicHigh);
		//SET_BIT(PORTA,0); //Setting bit no.0 in portA -> Led 0 is now on
		DIO_enumSetPin( DIO_enumPortA, DIO_enumPin1, DIO_enumLogicLow);
		//CLR_BIT(PORTA,0); //Setting bit no.1 in portA -> Led 1 is now off
		
		delay_ms(1000);  //delaying for 1 sec
		
		DIO_enumSetPin( DIO_enumPortA, DIO_enumPin0, DIO_enumLogicLow);
		//CLR_BIT(PORTA,0); //Clear bit no.0 in portA -> Led 0 is now off
		DIO_enumSetPin( DIO_enumPortA, DIO_enumPin1, DIO_enumLogicHigh);
		//SET_BIT(PORTA,1); //Setting bit no.1 in portA -> Led 1 is now on
		
		delay_ms(1000);  //delaying for 1 sec
		
		//DIO_enumSetPin( DIO_enumPortA, DIO_enumPin1, DIO_enumLogicLow);
		//CLR_BIT(PORTA,1); //Clear bit no.1 in portA -> Led 1 is now off
	}
}

