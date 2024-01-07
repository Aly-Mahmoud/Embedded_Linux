#include "DIO.h"
#include "Bit_Math.h"
#include "REG.h"
#include "Std_Types.h"


/**
 *@brief  : Function to Configure the Pins to be (INPUT pin -> (Pull up-Pull down)  or OUTPUT pin  )
 *@param  : Port Number,Pin Number,Configuration type(Input/Output).
 *@return : Error State.                                              
 */	


// DIO_enumError_t DIO_enumSetPinConfig(DIO_enumPorts_t Copy_enumPortNum , DIO_enumPins_t Copy_enumPinNum , DIO_enumConfig_t Copy_enumConfig)
// {
	

// 	DIO_enumError_t Error_Status = DIO_enum_Initial;

// /*----------------------------------------ERRORS-------------------------------------------*/
// 	if (Copy_enumPortNum > DIO_enumPortD || Copy_enumPortNum < DIO_enumPortA )
// 		Error_Status = DIO_enumWrongPort;

// 	else if (Copy_enumPinNum > DIO_enumPin7 || Copy_enumPinNum < DIO_enumPin0 )
// 	Error_Status = DIO_enumWrongPin;

// 	else if (Copy_enumConfig > DIO_enumInputExternalPD || Copy_enumConfig < DIO_enumOutput)
// 	Error_Status = DIO_enumWrongConfig;

// /*--------------------------------------Actual Work-----------------------------------------*/

// 	else
// 	{
	
// 		Error_Status = DIO_enumOk;

// 		switch(Copy_enumPortNum)
// 		{

// 	/*--------------------PORT A Case-----------------------*/

// 			case DIO_enumPortA:
	
// 				switch(Copy_enumConfig)
// 				{
// 					case DIO_enumOutput:
// 						SET_BIT(DDRA,Copy_enumPinNum);
// 					break;
							
// 					case DIO_enumInputInternalPU:
// 						CLR_BIT(DDRA,Copy_enumPinNum);
// 						SET_BIT(PORTA,Copy_enumPinNum);
// 					break;
							
// 					case DIO_enumInputExternalPD:
// 						CLR_BIT(DDRA,Copy_enumPinNum);
// 						CLR_BIT(PORTA,Copy_enumPinNum);
// 					break;
					
// 					default:
// 						/*do nothing*/
// 					break;
// 				}
	
// 		break;
		
// 			/*--------------------PORT B Case-----------------------*/

// 			case DIO_enumPortB:
	
// 			switch(Copy_enumConfig)
// 			{
// 				case DIO_enumOutput:
// 					SET_BIT(DDRB,Copy_enumPinNum);
// 				break;
		
// 				case DIO_enumInputInternalPU:
// 					CLR_BIT(DDRB,Copy_enumPinNum);
// 					SET_BIT(PORTB,Copy_enumPinNum);
// 				break;
		
// 				case DIO_enumInputExternalPD:
// 					CLR_BIT(DDRB,Copy_enumPinNum);
// 					CLR_BIT(PORTB,Copy_enumPinNum);
// 				break;
		
// 				default:
// 					/*do nothing*/
// 				break;
// 			}
	
// 			break;
			
// 			/*--------------------PORT C Case-----------------------*/

// 			case DIO_enumPortC:
						
// 			switch(Copy_enumConfig)
// 			{
// 				case DIO_enumOutput:
// 					SET_BIT(DDRC,Copy_enumPinNum);
// 				break;
							
// 				case DIO_enumInputInternalPU:
// 					CLR_BIT(DDRC,Copy_enumPinNum);
// 					SET_BIT(PORTC,Copy_enumPinNum);
// 				break;
							
// 				case DIO_enumInputExternalPD:
// 					CLR_BIT(DDRC,Copy_enumPinNum);
// 					CLR_BIT(PORTC,Copy_enumPinNum);
// 				break;
							
// 				default:
// 					/*do nothing*/
// 				break;
// 			}
			
// 			/*--------------------PORT C Case-----------------------*/

// 			case DIO_enumPortD:
						
// 			switch(Copy_enumConfig)
// 			{
// 				case DIO_enumOutput:
// 					SET_BIT(DDRD,Copy_enumPinNum);
// 				break;
							
// 				case DIO_enumInputInternalPU:
// 					CLR_BIT(DDRD,Copy_enumPinNum);
// 					SET_BIT(PORTD,Copy_enumPinNum);
// 				break;
							
// 				case DIO_enumInputExternalPD:
// 					CLR_BIT(DDRD,Copy_enumPinNum);
// 					CLR_BIT(PORTD,Copy_enumPinNum);
// 				break;
							
// 				default:
// 					/*do nothing*/
// 				break;
// 			}
						
// 			break;
			
// 		}

// 	}
// return Error_Status;
// } 


/**
 *@brief  : Function to Configure the whole Port(8 pins) at one time to be INPUT or OUTPUT port.
 *@param  : Port Number,Configuration type(Input/Output).
 *@return : Error State.
 */
// DIO_enumError_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum , DIO_enumConfig_t Copy_enumConfig)
// {
	
// 	DIO_enumError_t Error_Status = DIO_enum_Initial;
	
// 	/*---------------------------------------ERRORS-------------------------------------------*/
//     if (Copy_enumPortNum > DIO_enumPortD || Copy_enumPortNum < DIO_enumPortA )
//        Error_Status = DIO_enumWrongPort;

//     else if (Copy_enumConfig > DIO_enumInputExternalPD || Copy_enumConfig < DIO_enumPin0)
//         Error_Status = DIO_enumWrongConfig;

//     else 
//         {
// /*--------------------------------------Actual Work-----------------------------------------*/			
			
//             Error_Status = DIO_enumOk;

//             switch(Copy_enumPortNum)
// 			{
				
// /*--------------------PORT A Case-----------------------*/		
	
//             case DIO_enumPortA:
			
//                 switch(Copy_enumConfig)
// 				{
//                 case DIO_enumOutput:
//                     DDRA = REG_High;
//                 break;
				
//                 case DIO_enumInputInternalPU:
//                     DDRA = REG_Low;
//                     PORTA = REG_High;
//                 break;
				
//                 case DIO_enumInputExternalPD:
// 					DDRA = REG_Low;
// 					PORTA = REG_Low;
// 				break;
// 				}
// 			break;

// /*--------------------PORT B Case-----------------------*/

//             case DIO_enumPortB:
            
// 				switch(Copy_enumConfig)
// 				{
// 			    case DIO_enumOutput:
// 					 DDRB = REG_High;
// 			    break;
            
// 			 	case DIO_enumInputInternalPU:
// 					DDRB = REG_Low;
// 					PORTB = REG_High;
// 				break;
            
// 			    case DIO_enumInputExternalPD:
// 					DDRB = REG_Low;
// 					PORTB = REG_Low;
// 				break;
// 				}
// 			break;
			
// /*--------------------PORT C Case-----------------------*/
			
// 			case DIO_enumPortC:
            
// 				switch(Copy_enumConfig)
// 				{
// 			    case DIO_enumOutput:
// 				   DDRC = REG_High;
// 			    break;
            
// 			 	case DIO_enumInputInternalPU:
// 					DDRC = REG_Low;
// 					PORTC = REG_High;
// 				break;
            
// 			    case DIO_enumInputExternalPD:
// 					DDRC = REG_Low;
// 					PORTC = REG_Low;
// 				break;
// 				}
// 			break;
			
// /*--------------------PORT D Case-----------------------*/
			
//             case DIO_enumPortD:
            
// 				switch(Copy_enumConfig)
// 				{
					
// 				case DIO_enumOutput:
// 					 DDRD = REG_High;
// 				break;
            
// 		        case DIO_enumInputInternalPU:
// 					 DDRD = REG_Low;
// 					 PORTD = REG_High;
// 			    break;
            
// 			    case DIO_enumInputExternalPD:
// 					DDRD = REG_Low;
// 					PORTD = REG_Low;
//                 break;
// 				}
//             break;		
			
// 			}
//         }
        
// 	return Error_Status;
// }

/**
 *@brief  : Function to Set the Pins to be Logic HIGH  or Logic LOW or change in the configuration of the input pin (Pull Up - Pull Down)
 *@param  : Port Number,Pin Number,Logic State(HIGH/LOW).
 *@return : Error State                                                                      
 */	
DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum , DIO_enumPins_t Copy_enumPinNum , DIO_enumLogicState_t Copy_enumLogicState)
{

	DIO_enumError_t Error_Status = DIO_enum_Initial;
	
	/*---------------------------------------ERRORS-------------------------------------------*/
	if (Copy_enumPortNum > DIO_enumPortD || Copy_enumPortNum < DIO_enumPortA )
	Error_Status = DIO_enumWrongPort;

	else if (Copy_enumPinNum > DIO_enumPin7 || Copy_enumPinNum < DIO_enumPin0 )
	Error_Status = DIO_enumWrongPin;
	
	else if (Copy_enumLogicState > DIO_enumLogicHigh || Copy_enumLogicState < DIO_enumLogicLow )
	Error_Status = DIO_enumWrongConfig;

	else
	{
		/*--------------------------------------Actual Work-----------------------------------------*/
		
		Error_Status = DIO_enumOk;

		switch(Copy_enumPortNum)
		{
			
			/*--------------------PORT A Case-----------------------*/
			
			case DIO_enumPortA:
				switch (Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTA,Copy_enumPinNum);
					break;
					
					case DIO_enumLogicLow:
						CLR_BIT(PORTA,Copy_enumPinNum);
					break;
					
					default:
						/*do nothing*/
					break;	
				}
			break;

			/*--------------------PORT B Case-----------------------*/

			case DIO_enumPortB:
				switch (Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTB,Copy_enumPinNum);
					break;
				
					case DIO_enumLogicLow:
						CLR_BIT(PORTB,Copy_enumPinNum);
					break;
				
					default:
						/*do nothing*/
					break;
				}
			break;
			
			/*--------------------PORT C Case-----------------------*/
			
			case DIO_enumPortC:
			switch (Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
					SET_BIT(PORTC,Copy_enumPinNum);
				break;
				
				case DIO_enumLogicLow:
					CLR_BIT(PORTC,Copy_enumPinNum);
				break;
				
				default:
					/*do nothing*/
				break;
			}
			break;
			
			/*--------------------PORT D Case-----------------------*/
			
			case DIO_enumPortD:
			switch (Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
				SET_BIT(PORTD,Copy_enumPinNum);
				break;
							
				case DIO_enumLogicLow:
				CLR_BIT(PORTD,Copy_enumPinNum);
				break;
							
				default:
				/*do nothing*/
				break;
			}
			break;
			
		}
	}
	
	return Error_Status;		

}

/**
 *@brief : Function to Set the whole Port(8 pins) at one time to be Logic HIGH  or Logic LOW or change in the configuration of the input Port (Pull Up - Pull Down)
 *@param : Port Number,Logic State(HIGH/LOW).
 *@return: Error State.                                                                      
 */
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState)
{

	DIO_enumError_t Error_Status = DIO_enum_Initial;

	/*---------------------------------------ERRORS-------------------------------------------*/
	if (Copy_enumPortNum > DIO_enumPortD || Copy_enumPortNum < DIO_enumPortA )
	Error_Status = DIO_enumWrongPort;

	else if (Copy_enumLogicState > DIO_enumLogicHigh || Copy_enumLogicState < DIO_enumLogicLow )
	Error_Status = DIO_enumWrongConfig;

	else
	{
		/*--------------------------------------Actual Work-----------------------------------------*/
	
		Error_Status = DIO_enumOk;

		switch(Copy_enumPortNum)
		{
		
			/*--------------------PORT A Case-----------------------*/
		
			case DIO_enumPortA:
				switch (Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						ASSIGN_REG(PORTA,1);
					break;
			
					case DIO_enumLogicLow:
						ASSIGN_REG(PORTA,0);
					break;
			
					default:
						/*do nothing*/
					break;
				}
				break;

			/*--------------------PORT B Case-----------------------*/

			case DIO_enumPortB:
			switch (Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
					ASSIGN_REG(PORTB,1);
				break;
			
				case DIO_enumLogicLow:
					ASSIGN_REG(PORTB,0);
				break;
			
				default:
					/*do nothing*/
				break;
			}
			break;
		
			/*--------------------PORT C Case-----------------------*/
		
			case DIO_enumPortC:
			switch (Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
					ASSIGN_REG(PORTC,1);
				break;
			
				case DIO_enumLogicLow:
					ASSIGN_REG(PORTC,0);
				break;
			
				default:
					/*do nothing*/
				break;
			}
			break;
		
			/*--------------------PORT D Case-----------------------*/
		
			case DIO_enumPortD:
			switch (Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
					ASSIGN_REG(PORTD,1);
				break;
			
				case DIO_enumLogicLow:
					ASSIGN_REG(PORTD,0);
				break;
			
				default:
					/*do nothing*/
				break;
			}
			break;
		
		}
	}

	return Error_Status;	
	
}

/**
 *@brief  : Function to Read the Logic State of the Pin (Is it HIGH or LOW).
 *@param  : Port Number,Pin Number, Pointer points to unsigned char passed by address (to return the value of pin state).
 *@return : Error State                                                                     
 */
DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum , DIO_enumPins_t Copy_enumPinNum , DIO_enumLogicState_t* Add_Pu8PinValue)
{
	
	DIO_enumError_t Error_Status = DIO_enum_Initial;
	
	if (Copy_enumPortNum > DIO_enumPortD || Copy_enumPortNum < DIO_enumPortA )
		Error_Status = DIO_enumWrongPort;

	else if (Copy_enumPinNum > DIO_enumPin7 || Copy_enumPinNum < DIO_enumPin0 )
		Error_Status = DIO_enumWrongPin;
	
	else if (*Add_Pu8PinValue == NULL)
		Error_Status = DIO_enumNullPointer;

	else	
	{
		/*--------------------------------------Actual Work-----------------------------------------*/
		
		Error_Status = DIO_enumOk;

		switch(Copy_enumPortNum)
		{
			
			/*--------------------PORT A Case-----------------------*/
			case DIO_enumPortA:
				*Add_Pu8PinValue = GET_BIT(PORTA,Copy_enumPinNum);
			/*--------------------PORT B Case-----------------------*/
			case DIO_enumPortB:
				*Add_Pu8PinValue = GET_BIT(PORTB,Copy_enumPinNum);	
			/*--------------------PORT C Case-----------------------*/
			case DIO_enumPortC:
				*Add_Pu8PinValue = GET_BIT(PORTC,Copy_enumPinNum);
			/*--------------------PORT D Case-----------------------*/
			case DIO_enumPortD:
				*Add_Pu8PinValue = GET_BIT(PORTD,Copy_enumPinNum);

			
		}
	}

	return Error_Status;
		
}
