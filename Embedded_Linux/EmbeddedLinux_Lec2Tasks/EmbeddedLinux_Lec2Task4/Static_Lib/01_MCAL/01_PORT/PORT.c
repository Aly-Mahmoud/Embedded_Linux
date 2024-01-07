#include "PORT_Config.h"
#include "REG.h"
#include "Std_Types.h"
#include "Port.h"
#include "Bit_Math.h"


#define CONCAT(pin7,pin6,pin5,pin4,pin3,pin2,pin1,pin0)             CONCAT_Helper(pin7,pin6,pin5,pin4,pin3,pin2,pin1,pin0)
#define CONCAT_Helper(pin7,pin6,pin5,pin4,pin3,pin2,pin1,pin0)		0b##pin7##pin6##pin5##pin4##pin3##pin2##pin1##pin0 

void PORT_vidInit(void)
{

    #if (Compilation_Process==Post_Compile)

        extern PORT_strConfig_t PORT_Configration_Array[];
        U8 PORT_NUMBER;
	    U8 PIN_NUMBER;

        for(U8 i =0; i < Four_Port_8Pins; i++)
		{
			PORT_NUMBER = (PORT_Configration_Array[i].PortNumber_PinNumber)/8;
			PIN_NUMBER = (PORT_Configration_Array[i].PortNumber_PinNumber)%8;
			
			switch (PORT_NUMBER)
			{
               /*Port A*/ 
				case PortA:
					switch (PORT_Configration_Array[i].Pin_Dir)
					{
						case Port_PinDir_Input:

                            switch (PORT_Configration_Array[i].Pin_Status)
                                case PortPin_High:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    SET_BIT(PORTA,PIN_NUMBER);
                                break;

                                case PortPin_low:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    CLR_BIT(PORTA,PIN_NUMBER);
                                break;

                                default:
                                break;

						case Port_PinDir_Output:
							SET_BIT(DDRA,PIN_NUMBER);
							CLR_BIT(PORTA,PIN_NUMBER);
					    break;

						default:
						break;

           
					}
               /*------*/  

               /*Port B*/ 
				case PortB:
					switch (PORT_Configration_Array[i].Pin_Dir)
					{
						case Port_PinDir_Input:

                            switch (PORT_Configration_Array[i].Pin_Status)
                                case PortPin_High:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    SET_BIT(PORTA,PIN_NUMBER);
                                break;

                                case PortPin_low:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    CLR_BIT(PORTA,PIN_NUMBER);
                                break;

                                default:
                                break;

						case Port_PinDir_Output:
							SET_BIT(DDRA,PIN_NUMBER);
							CLR_BIT(PORTA,PIN_NUMBER);
					    break;

						default:
						break;

           
					}
               /*------*/   

               /*Port C*/ 
				case PortC:
					switch (PORT_Configration_Array[i].Pin_Dir)
					{
						case Port_PinDir_Input:

                            switch (PORT_Configration_Array[i].Pin_Status)
                                case PortPin_High:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    SET_BIT(PORTA,PIN_NUMBER);
                                break;

                                case PortPin_low:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    CLR_BIT(PORTA,PIN_NUMBER);
                                break;

                                default:
                                break;

						case Port_PinDir_Output:
							SET_BIT(DDRA,PIN_NUMBER);
							CLR_BIT(PORTA,PIN_NUMBER);
					    break;

						default:
						break;

           
					}
               /*------*/  

               /*Port D*/ 
				case PortD:
					switch (PORT_Configration_Array[i].Pin_Dir)
					{
						case Port_PinDir_Input:

                            switch (PORT_Configration_Array[i].Pin_Status)
                                case PortPin_High:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    SET_BIT(PORTA,PIN_NUMBER);
                                break;

                                case PortPin_low:
                                    CLR_BIT(DDRA,PIN_NUMBER);
                                    CLR_BIT(PORTA,PIN_NUMBER);
                                break;

                                default:
                                break;

						case Port_PinDir_Output:
							SET_BIT(DDRA,PIN_NUMBER);
							CLR_BIT(PORTA,PIN_NUMBER);
					    break;

						default:
						break;

           
					}
               /*------*/     

               defult:
               break;             

            }
        }
        
    #elif (Compilation_Process == Pre_Compile)
        
            /*Port A*/

                /*no need for condition as there must be atleast 1 port*/

                    /*pin 0*/
                        #if(PortA_Pin0_Config == Output)
                            #define PortA_Pin0_DIR  Output
                            #define PortA_Pin0_State Logical_Low
                        #elif(PortA_Pin0_Config == Input_Pull_Down) 
                            #define PortA_Pin0_DIR  Input
                            #define PortA_Pin0_State Logical_Low
                        #elif(PortA_Pin0_Config == Input_Pull_Up)   
                            #define PortA_Pin0_DIR  Input
                            #define PortA_Pin0_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 1*/
                        #if(PortA_Pin1_Config == Output)
                            #define PortA_Pin1_DIR  Output
                            #define PortA_Pin1_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Down) 
                            #define PortA_Pin1_DIR  Input
                            #define PortA_Pin1_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Up)   
                            #define PortA_Pin1_DIR  Input
                            #define PortA_Pin1_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 2*/
                        #if(PortA_Pin2_Config == Output)
                            #define PortA_Pin2_DIR  Output
                            #define PortA_Pin2_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Down) 
                            #define PortA_Pin2_DIR  Input
                            #define PortA_Pin2_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Up)   
                            #define PortA_Pin2_DIR  Input
                            #define PortA_Pin2_State Logical_High
                        #endif      
                    /*-----*/    

                    /*pin 3*/
                        #if(PortA_Pin3_Config == Output)
                            #define PortA_Pin3_DIR  Output
                            #define PortA_Pin3_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Down) 
                            #define PortA_Pin3_DIR  Input
                            #define PortA_Pin3_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Up)   
                            #define PortA_Pin3_DIR  Input
                            #define PortA_Pin3_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 4*/
                        #if(PortA_Pin4_Config == Output)
                            #define PortA_Pin4_DIR  Output
                            #define PortA_Pin4_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Down) 
                            #define PortA_Pin4_DIR  Input
                            #define PortA_Pin4_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Up)   
                            #define PortA_Pin4_DIR  Input
                            #define PortA_Pin4_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 5*/
                        #if(PortA_Pin5_Config == Output)
                            #define PortA_Pin5_DIR  Output
                            #define PortA_Pin5_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Down) 
                            #define PortA_Pin5_DIR  Input
                            #define PortA_Pin5_State Logical_Low
                        #elif(PortA_Pin1_Config == Input_Pull_Up)   
                            #define PortA_Pin5_DIR  Input
                            #define PortA_Pin5_State Logical_High
                        #endif      
                    /*-----*/

                    /*if 6 pins only*/
                        #if (Pin_Numbers == Six_Pins)

                        /*Dummy variable to be able to concat for pin_6*/
                            #define PortA_Pin6_DIR  Output
                            #define PortA_Pin6_State Logical_Low
                        /*---------------------------------------------*/

                        /*Dummy variable to be able to concat for pin_7*/
                            #define PortA_Pin7_DIR  Output
                            #define PortA_Pin7_State Logical_Low
                        /*---------------------------------------------*/

                        #endif
                    /*--------------*/

                    /*pin 6*/
                        #if (Pin_Numbers == Seven_Pins)
                            #if(PortA_Pin6_Config == Output)
                                #define PortA_Pin6_DIR  Output
                                #define PortA_Pin6_State Logical_Low
                            #elif(PortA_Pin6_Config == Input_Pull_Down) 
                                #define PortA_Pin6_DIR  Input
                                #define PortA_Pin6_State Logical_Low
                            #elif(PortA_Pin6_Config == Input_Pull_Up)   
                                #define PortA_Pin6_DIR  Input
                                #define PortA_Pin6_State Logical_High
                            #endif 

                            /*Dummy variable to be able to concat for pin_7*/
                            #define PortA_Pin7_DIR  Output
                            #define PortA_Pin7_State Logical_Low
                            /*---------------------------------------------*/

                        #endif    
                    /*-----*/

                    /*pin 7*/
                        #if (Pin_Numbers == Eight_pins)
                        
                            #if(PortA_Pin6_Config == Output)
                                #define PortA_Pin6_DIR  Output
                                #define PortA_Pin6_State Logical_Low
                            #elif(PortA_Pin6_Config == Input_Pull_Down) 
                                #define PortA_Pin6_DIR  Input
                                #define PortA_Pin6_State Logical_Low
                            #elif(PortA_Pin6_Config == Input_Pull_Up)   
                                #define PortA_Pin6_DIR  Input
                                #define PortA_Pin6_State Logical_High
                            #endif  

                            #if(PortA_Pin7_Config == Output)
                                #define PortA_Pin7_DIR  Output
                                #define PortA_Pin7_State Logical_Low
                            #elif(PortA_Pin7_Config == Input_Pull_Down) 
                                #define PortA_Pin7_DIR  Input
                                #define PortA_Pin7_State Logical_Low
                            #elif(PortA_Pin7_Config == Input_Pull_Up)   
                                #define PortA_Pin7_DIR  Input
                                #define PortA_Pin7_State Logical_High
                            #endif 

                        #endif      
                    /*-----*/

                    /*Concate Port A*/
                        DDRA=CONCAT(PortA_Pin7_DIR, PortA_Pin6_DIR, PortA_Pin5_DIR, PortA_Pin4_DIR, PortA_Pin3_DIR, PortA_Pin2_DIR, PortA_Pin1_DIR, PortA_Pin0_DIR);
                        PORTA=CONCAT(PortA_Pin7_State, PortA_Pin6_State, PortA_Pin5_State, PortA_Pin4_State, PortA_Pin3_State, PortA_Pin2_State, PortA_Pin1_State, PortA_Pin0_State);
                    /*-------*/

            /*------*/

            /*Port B*/
                #if(Ports_Numbers == Two_Ports || Ports_Numbers == Three_Ports || Ports_Numbers == Four_Ports)

                    /*pin 0*/
                        #if(PortB_Pin0_Config == Output)
                            #define PortB_Pin0_DIR  Output
                            #define PortB_Pin0_State Logical_Low
                        #elif(PortB_Pin0_Config == Input_Pull_Down) 
                            #define PortB_Pin0_DIR  Input
                            #define PortB_Pin0_State Logical_Low
                        #elif(PortB_Pin0_Config == Input_Pull_Up)   
                            #define PortB_Pin0_DIR  Input
                            #define PortB_Pin0_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 1*/
                        #if(PortB_Pin1_Config == Output)
                            #define PortB_Pin1_DIR  Output
                            #define PortB_Pin1_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Down) 
                            #define PortB_Pin1_DIR  Input
                            #define PortB_Pin1_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Up)   
                            #define PortB_Pin1_DIR  Input
                            #define PortB_Pin1_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 2*/
                        #if(PortB_Pin2_Config == Output)
                            #define PortB_Pin2_DIR  Output
                            #define PortB_Pin2_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Down) 
                            #define PortB_Pin2_DIR  Input
                            #define PortB_Pin2_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Up)   
                            #define PortB_Pin2_DIR  Input
                            #define PortB_Pin2_State Logical_High
                        #endif      
                    /*-----*/    

                    /*pin 3*/
                        #if(PortB_Pin3_Config == Output)
                            #define PortB_Pin3_DIR  Output
                            #define PortB_Pin3_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Down) 
                            #define PortB_Pin3_DIR  Input
                            #define PortB_Pin3_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Up)   
                            #define PortB_Pin3_DIR  Input
                            #define PortB_Pin3_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 4*/
                        #if(PortB_Pin4_Config == Output)
                            #define PortB_Pin4_DIR  Output
                            #define PortB_Pin4_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Down) 
                            #define PortB_Pin4_DIR  Input
                            #define PortB_Pin4_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Up)   
                            #define PortB_Pin4_DIR  Input
                            #define PortB_Pin4_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 5*/
                        #if(PortB_Pin5_Config == Output)
                            #define PortB_Pin5_DIR  Output
                            #define PortB_Pin5_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Down) 
                            #define PortB_Pin5_DIR  Input
                            #define PortB_Pin5_State Logical_Low
                        #elif(PortB_Pin1_Config == Input_Pull_Up)   
                            #define PortB_Pin5_DIR  Input
                            #define PortB_Pin5_State Logical_High
                        #endif      
                    /*-----*/

                    /*if 6 pins only*/
                        #if (Pin_Numbers == Six_Pins)

                        /*Dummy variable to be able to concat for pin_6*/
                            #define PortB_Pin6_DIR  Output
                            #define PortB_Pin6_State Logical_Low
                        /*---------------------------------------------*/

                        /*Dummy variable to be able to concat for pin_7*/
                            #define PortB_Pin7_DIR  Output
                            #define PortB_Pin7_State Logical_Low
                        /*---------------------------------------------*/

                        #endif
                    /*--------------*/

                    /*pin 6*/
                        #if (Pin_Numbers == Seven_Pins)
                            #if(PortB_Pin6_Config == Output)
                                #define PortB_Pin6_DIR  Output
                                #define PortB_Pin6_State Logical_Low
                            #elif(PortB_Pin6_Config == Input_Pull_Down) 
                                #define PortB_Pin6_DIR  Input
                                #define PortB_Pin6_State Logical_Low
                            #elif(PortB_Pin6_Config == Input_Pull_Up)   
                                #define PortB_Pin6_DIR  Input
                                #define PortB_Pin6_State Logical_High
                            #endif 
                            /*Dummy variable to be able to concat for pin_7*/
                                #define PortB_Pin7_DIR  Output
                                #define PortB_Pin7_State Logical_Low
                            /*---------------------------------------------*/
                        #endif    
                    /*-----*/

                    /*pin 7*/
                        #if (Pin_Numbers == Eight_pins)
                        
                            #if(PortB_Pin6_Config == Output)
                                #define PortB_Pin6_DIR  Output
                                #define PortB_Pin6_State Logical_Low
                            #elif(PortB_Pin6_Config == Input_Pull_Down) 
                                #define PortB_Pin6_DIR  Input
                                #define PortB_Pin6_State Logical_Low
                            #elif(PortB_Pin6_Config == Input_Pull_Up)   
                                #define PortB_Pin6_DIR  Input
                                #define PortB_Pin6_State Logical_High
                            #endif  

                            #if(PortB_Pin7_Config == Output)
                                #define PortB_Pin7_DIR  Output
                                #define PortB_Pin7_State Logical_Low
                            #elif(PortB_Pin7_Config == Input_Pull_Down) 
                                #define PortB_Pin7_DIR  Input
                                #define PortB_Pin7_State Logical_Low
                            #elif(PortB_Pin7_Config == Input_Pull_Up)   
                                #define PortB_Pin7_DIR  Input
                                #define PortB_Pin7_State Logical_High
                            #endif

                        #endif          
                    /*-----*/

                    /*Concate Port B*/
                        DDRB=CONCAT(PortB_Pin7_DIR, PortB_Pin6_DIR, PortB_Pin5_DIR, PortB_Pin4_DIR, PortB_Pin3_DIR, PortB_Pin2_DIR, PortB_Pin1_DIR, PortB_Pin0_DIR);
                        PORTB=CONCAT(PortB_Pin7_State, PortB_Pin6_State, PortB_Pin5_State, PortB_Pin4_State, PortB_Pin3_State, PortB_Pin2_State, PortB_Pin1_State, PortB_Pin0_State);
                    /*-------*/

                #endif    
            /*------*/

            /*Port C*/
                #if(Ports_Numbers == Three_Ports || Ports_Numbers == Four_Ports)

                    /*pin 0*/
                        #if(PortC_Pin0_Config == Output)
                            #define PortC_Pin0_DIR  Output
                            #define PortC_Pin0_State Logical_Low
                        #elif(PortC_Pin0_Config == Input_Pull_Down) 
                            #define PortC_Pin0_DIR  Input
                            #define PortC_Pin0_State Logical_Low
                        #elif(PortC_Pin0_Config == Input_Pull_Up)   
                            #define PortC_Pin0_DIR  Input
                            #define PortC_Pin0_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 1*/
                        #if(PortC_Pin1_Config == Output)
                            #define PortC_Pin1_DIR  Output
                            #define PortC_Pin1_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Down) 
                            #define PortC_Pin1_DIR  Input
                            #define PortC_Pin1_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Up)   
                            #define PortC_Pin1_DIR  Input
                            #define PortC_Pin1_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 2*/
                        #if(PortC_Pin2_Config == Output)
                            #define PortC_Pin2_DIR  Output
                            #define PortC_Pin2_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Down) 
                            #define PortC_Pin2_DIR  Input
                            #define PortC_Pin2_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Up)   
                            #define PortC_Pin2_DIR  Input
                            #define PortC_Pin2_State Logical_High
                        #endif      
                    /*-----*/    

                    /*pin 3*/
                        #if(PortC_Pin3_Config == Output)
                            #define PortC_Pin3_DIR  Output
                            #define PortC_Pin3_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Down) 
                            #define PortC_Pin3_DIR  Input
                            #define PortC_Pin3_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Up)   
                            #define PortC_Pin3_DIR  Input
                            #define PortC_Pin3_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 4*/
                        #if(PortC_Pin4_Config == Output)
                            #define PortC_Pin4_DIR  Output
                            #define PortC_Pin4_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Down) 
                            #define PortC_Pin4_DIR  Input
                            #define PortC_Pin4_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Up)   
                            #define PortC_Pin4_DIR  Input
                            #define PortC_Pin4_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 5*/
                        #if(PortC_Pin5_Config == Output)
                            #define PortC_Pin5_DIR  Output
                            #define PortC_Pin5_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Down) 
                            #define PortC_Pin5_DIR  Input
                            #define PortC_Pin5_State Logical_Low
                        #elif(PortC_Pin1_Config == Input_Pull_Up)   
                            #define PortC_Pin5_DIR  Input
                            #define PortC_Pin5_State Logical_High
                        #endif      
                    /*-----*/

                    /*if 6 pins only*/
                        #if (Pin_Numbers == Six_Pins)

                        /*Dummy variable to be able to concat for pin_6*/
                            #define PortC_Pin6_DIR  Output
                            #define PortC_Pin6_State Logical_Low
                        /*---------------------------------------------*/

                        /*Dummy variable to be able to concat for pin_7*/
                            #define PortC_Pin7_DIR  Output
                            #define PortC_Pin7_State Logical_Low
                        /*---------------------------------------------*/

                        #endif
                    /*--------------*/

                    /*pin 6*/
                        #if (Pin_Numbers == Seven_Pins)
                            #if(PortC_Pin6_Config == Output)
                                #define PortC_Pin6_DIR  Output
                                #define PortC_Pin6_State Logical_Low
                            #elif(PortC_Pin6_Config == Input_Pull_Down) 
                                #define PortC_Pin6_DIR  Input
                                #define PortC_Pin6_State Logical_Low
                            #elif(PortC_Pin6_Config == Input_Pull_Up)   
                                #define PortC_Pin6_DIR  Input
                                #define PortC_Pin6_State Logical_High
                            #endif 
                            /*Dummy variable to be able to concat for pin_7*/
                                #define PortC_Pin7_DIR  Output
                                #define PortC_Pin7_State Logical_Low
                            /*---------------------------------------------*/
                        #endif    
                    /*-----*/

                    /*pin 7*/
                        #if (Pin_Numbers == Eight_pins)
                        
                            #if(PortC_Pin6_Config == Output)
                                #define PortC_Pin6_DIR  Output
                                #define PortC_Pin6_State Logical_Low
                            #elif(PortC_Pin6_Config == Input_Pull_Down) 
                                #define PortC_Pin6_DIR  Input
                                #define PortC_Pin6_State Logical_Low
                            #elif(PortC_Pin6_Config == Input_Pull_Up)   
                                #define PortC_Pin6_DIR  Input
                                #define PortC_Pin6_State Logical_High
                            #endif  

                            #if(PortC_Pin7_Config == Output)
                                #define PortC_Pin7_DIR  Output
                                #define PortC_Pin7_State Logical_Low
                            #elif(PortC_Pin7_Config == Input_Pull_Down) 
                                #define PortC_Pin7_DIR  Input
                                #define PortC_Pin7_State Logical_Low
                            #elif(PortC_Pin7_Config == Input_Pull_Up)   
                                #define PortC_Pin7_DIR  Input
                                #define PortC_Pin7_State Logical_High
                            #endif

                        #endif          
                    /*-----*/

                    /*Concate Port C*/
                        DDRC=CONCAT(PortC_Pin7_DIR, PortC_Pin6_DIR, PortC_Pin5_DIR, PortC_Pin4_DIR, PortC_Pin3_DIR, PortC_Pin2_DIR, PortC_Pin1_DIR, PortC_Pin0_DIR);
                        PORTC=CONCAT(PortC_Pin7_State, PortC_Pin6_State, PortC_Pin5_State, PortC_Pin4_State, PortC_Pin3_State, PortC_Pin2_State, PortC_Pin1_State, PortC_Pin0_State);
                    /*-------*/
                #endif    
            /*------*/
        
            /*Port D*/
                #if(Ports_Numbers == Four_Ports)

                    /*pin 0*/
                        #if(PortD_Pin0_Config == Output)
                            #define PortD_Pin0_DIR  Output
                            #define PortD_Pin0_State Logical_Low
                        #elif(PortD_Pin0_Config == Input_Pull_Down) 
                            #define PortD_Pin0_DIR  Input
                            #define PortD_Pin0_State Logical_Low
                        #elif(PortD_Pin0_Config == Input_Pull_Up)   
                            #define PortD_Pin0_DIR  Input
                            #define PortD_Pin0_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 1*/
                        #if(PortD_Pin1_Config == Output)
                            #define PortD_Pin1_DIR  Output
                            #define PortD_Pin1_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Down) 
                            #define PortD_Pin1_DIR  Input
                            #define PortD_Pin1_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Up)   
                            #define PortD_Pin1_DIR  Input
                            #define PortD_Pin1_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 2*/
                        #if(PortD_Pin2_Config == Output)
                            #define PortD_Pin2_DIR  Output
                            #define PortD_Pin2_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Down) 
                            #define PortD_Pin2_DIR  Input
                            #define PortD_Pin2_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Up)   
                            #define PortD_Pin2_DIR  Input
                            #define PortD_Pin2_State Logical_High
                        #endif      
                    /*-----*/    

                    /*pin 3*/
                        #if(PortD_Pin3_Config == Output)
                            #define PortD_Pin3_DIR  Output
                            #define PortD_Pin3_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Down) 
                            #define PortD_Pin3_DIR  Input
                            #define PortD_Pin3_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Up)   
                            #define PortD_Pin3_DIR  Input
                            #define PortD_Pin3_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 4*/
                        #if(PortD_Pin4_Config == Output)
                            #define PortD_Pin4_DIR  Output
                            #define PortD_Pin4_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Down) 
                            #define PortD_Pin4_DIR  Input
                            #define PortD_Pin4_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Up)   
                            #define PortD_Pin4_DIR  Input
                            #define PortD_Pin4_State Logical_High
                        #endif      
                    /*-----*/

                    /*pin 5*/
                        #if(PortD_Pin5_Config == Output)
                            #define PortD_Pin5_DIR  Output
                            #define PortD_Pin5_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Down) 
                            #define PortD_Pin5_DIR  Input
                            #define PortD_Pin5_State Logical_Low
                        #elif(PortD_Pin1_Config == Input_Pull_Up)   
                            #define PortD_Pin5_DIR  Input
                            #define PortD_Pin5_State Logical_High
                        #endif      
                    /*-----*/

                    /*if 6 pins only*/
                        #if (Pin_Numbers == Six_Pins)

                        /*Dummy variable to be able to concat for pin_6*/
                            #define PortD_Pin6_DIR  Output
                            #define PortCD_Pin6_State Logical_Low
                        /*---------------------------------------------*/

                        /*Dummy variable to be able to concat for pin_7*/
                            #define PortD_Pin7_DIR  Output
                            #define PortD_Pin7_State Logical_Low
                        /*---------------------------------------------*/

                        #endif
                    /*--------------*/

                    /*pin 6*/
                        #if (Pin_Numbers == Seven_Pins)
                            #if(PortD_Pin6_Config == Output)
                                #define PortD_Pin6_DIR  Output
                                #define PortD_Pin6_State Logical_Low
                            #elif(PortD_Pin6_Config == Input_Pull_Down) 
                                #define PortD_Pin6_DIR  Input
                                #define PortD_Pin6_State Logical_Low
                            #elif(PortD_Pin6_Config == Input_Pull_Up)   
                                #define PortD_Pin6_DIR  Input
                                #define PortD_Pin6_State Logical_High
                            #endif 
                            /*Dummy variable to be able to concat for pin_7*/
                                #define PortD_Pin7_DIR  Output
                                #define PortD_Pin7_State Logical_Low
                            /*---------------------------------------------*/
                        #endif    
                    /*-----*/

                    /*pin 7*/
                        #if (Pin_Numbers == Eight_pins)
                        
                            #if(PortD_Pin6_Config == Output)
                                #define PortD_Pin6_DIR  Output
                                #define PortD_Pin6_State Logical_Low
                            #elif(PortD_Pin6_Config == Input_Pull_Down) 
                                #define PortD_Pin6_DIR  Input
                                #define PortD_Pin6_State Logical_Low
                            #elif(PortD_Pin6_Config == Input_Pull_Up)   
                                #define PortD_Pin6_DIR  Input
                                #define PortD_Pin6_State Logical_High
                            #endif  

                            #if(PortD_Pin7_Config == Output)
                                #define PortD_Pin7_DIR  Output
                                #define PortD_Pin7_State Logical_Low
                            #elif(PortD_Pin7_Config == Input_Pull_Down) 
                                #define PortD_Pin7_DIR  Input
                                #define PortD_Pin7_State Logical_Low
                            #elif(PortD_Pin7_Config == Input_Pull_Up)   
                                #define PortD_Pin7_DIR  Input
                                #define PortD_Pin7_State Logical_High
                            #endif

                        #endif          
                    /*-----*/

                    /*Concate Port A*/
                        DDRD=CONCAT(PortD_Pin7_DIR, PortD_Pin6_DIR, PortD_Pin5_DIR, PortD_Pin4_DIR, PortD_Pin3_DIR, PortD_Pin2_DIR, PortD_Pin1_DIR, PortD_Pin0_DIR);
                        PORTD=CONCAT(PortD_Pin7_State, PortD_Pin6_State, PortD_Pin5_State, PortD_Pin4_State, PortD_Pin3_State, PortD_Pin2_State, PortD_Pin1_State, PortD_Pin0_State);
                    /*-------*/
                #endif    
            /*------*/
            
    #endif

}

PORT_enuErrorStatus_t PORT_PinConfig (PORT_strConfig_t *Add_PORT_strConfigArray, U8 Length)
{
    //extern PORT_strConfig_t PORT_arrofstr_HALComp[Length];
	
	PORT_enuErrorStatus_t PORT_enuReturnErrorStatus = OK;
	
    for(U8 j=0; j<Length; j++)
    {
        switch(Add_PORT_strConfigArray[j].Port_enumPortNumber)
        {
        
            /*Handling Wrong Port Number*/
                if(Ports_Numbers < Add_PORT_strConfigArray[j].Port_enumPortNumber)
                {
                    PORT_enuReturnErrorStatus  = WrongPortNo;
                }
            /*----------------------------*/

        /*PortA*/ 
            case PortA:
                switch(Add_PORT_strConfigArray[j].Port_enumPinNumber)
                {
                /*Handling wrong pin number in port A*/
                    if(Pin_Numbers < Add_PORT_strConfigArray[j].Port_enumPinNumber)
                    {
                        PORT_enuReturnErrorStatus  = WrongPinNo;
                    }
                /*-----------------------------------*/  

                /*pin0*/
                    case Pin0:
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
                            case(Port_PinDir_Output):
                                SET_BIT(DDRA,Pin0);
							break;	
                            case(Port_PinDir_Input):
                                SET_BIT(DDRA,Pin0);
							break;	
                        }  
					break;	
                /*---*/ 

                /*pin1*/
                    case Pin1:
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
	                        case(Port_PinDir_Output):
	                        SET_BIT(DDRA,Pin1);
	                        break;
	                        case(Port_PinDir_Input):
	                        SET_BIT(DDRA,Pin1);
	                        break;
                        }
                    break;
                /*----*/ 
                
                /*pin2*/
                    case Pin2:
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
	                        case(Port_PinDir_Output):
	                        SET_BIT(DDRA,Pin2);
	                        break;
	                        case(Port_PinDir_Input):
	                        SET_BIT(DDRA,Pin2);
	                        break;
                        }
                    break; 
                /*----*/   

                /*pin3*/
				    case Pin3:
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
	                        case(Port_PinDir_Output):
	                        SET_BIT(DDRA,Pin3);
	                        break;
	                        case(Port_PinDir_Input):
	                        SET_BIT(DDRA,Pin3);
	                        break;
                        }
                    break; 
                /*----*/ 

                /*pin4*/
                    case Pin4:				 
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
	                        case(Port_PinDir_Output):
	                        SET_BIT(DDRA,Pin4);
	                        break;
	                        case(Port_PinDir_Input):
	                        SET_BIT(DDRA,Pin4);
	                        break;
                        }
                    break;
                /*----*/ 

                /*pin5*/
                    case Pin5:
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
	                        case(Port_PinDir_Output):
	                        SET_BIT(DDRA,Pin5);
	                        break;
	                        case(Port_PinDir_Input):
	                        SET_BIT(DDRA,Pin5);
	                        break;
                        }
                    break;                     
                /*----*/ 

                /*pin6*/
                    case Pin6:
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
	                        case(Port_PinDir_Output):
	                        SET_BIT(DDRA,Pin6);
	                        break;
	                        case(Port_PinDir_Input):
	                        SET_BIT(DDRA,Pin6);
	                        break;
                        }
                    break; 
                /*----*/ 

                /*pin7*/
                    case Pin7:
                        switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
                        {
	                        case(Port_PinDir_Output):
	                        SET_BIT(DDRA,Pin7);
	                        break;
	                        case(Port_PinDir_Input):
	                        SET_BIT(DDRA,Pin7);
	                        break;
                        }
                    break; 
                /*----*/                         
			break;
                } 
        /*----*/  
        
        /*PortB*/ 
            case PortB:
                switch(Add_PORT_strConfigArray[j].Port_enumPinNumber)
                {
                /*Handling wrong pin number in port B*/
                    if(Pin_Numbers < Add_PORT_strConfigArray[j].Port_enumPinNumber)
                    {
                        PORT_enuReturnErrorStatus  = WrongPinNo;
                    }
            /*----------------------------*/
			
	            /*pin0*/
	            case Pin0:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin0);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin0);
		            break;
	            }
	            break;
	            /*---*/

	            /*pin1*/
	            case Pin1:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin1);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin1);
		            break;
	            }
	            break;
	            /*----*/
	            
	            /*pin2*/
	            case Pin2:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin2);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin2);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin3*/
	            case Pin3:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin3);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin3);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin4*/
	            case Pin4:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin4);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin4);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin5*/
	            case Pin5:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin5);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin5);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin6*/
	            case Pin6:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin6);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin6);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin7*/
	            case Pin7:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin7);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin7);
		            break;
	            }
	            break;
	            /*----*/
			break;
            }
            /*----*/  
        
        /*PortC*/ 
            case PortC:
                switch(Add_PORT_strConfigArray[j].Port_enumPinNumber)
                {
                /*Handling wrong pin number in port C*/
                    if(Pin_Numbers < Add_PORT_strConfigArray[j].Port_enumPinNumber)
                    {
                        PORT_enuReturnErrorStatus  = WrongPinNo;
                    }
 	            /*-----------------------------------*/

 	            /*pin0*/
 	            case Pin0:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin0);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin0);
	 	            break;
 	            }
 	            break;
 	            /*---*/

 	            /*pin1*/
 	            case Pin1:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin1);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin1);
	 	            break;
 	            }
 	            break;
 	            /*----*/
 	            
 	            /*pin2*/
 	            case Pin2:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin2);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin2);
	 	            break;
 	            }
 	            break;
 	            /*----*/

 	            /*pin3*/
 	            case Pin3:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin3);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin3);
	 	            break;
 	            }
 	            break;
 	            /*----*/

 	            /*pin4*/
 	            case Pin4:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin4);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin4);
	 	            break;
 	            }
 	            break;
 	            /*----*/

 	            /*pin5*/
 	            case Pin5:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin5);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin5);
	 	            break;
 	            }
 	            break;
 	            /*----*/

 	            /*pin6*/
 	            case Pin6:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin6);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin6);
	 	            break;
 	            }
 	            break;
 	            /*----*/

 	            /*pin7*/
 	            case Pin7:
 	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
 	            {
	 	            case(Port_PinDir_Output):
	 	            SET_BIT(DDRA,Pin7);
	 	            break;
	 	            case(Port_PinDir_Input):
	 	            SET_BIT(DDRA,Pin7);
	 	            break;
 	            }
 	            break;
 	            /*----*/
 	        break;
             }
       /*----*/ 
            
        /*PortD*/ 
            case PortD:
                switch(Add_PORT_strConfigArray[j].Port_enumPinNumber)
                {
                /*Handling wrong pin number in port D*/
                    if(Pin_Numbers < Add_PORT_strConfigArray[j].Port_enumPinNumber)
                    {
                        PORT_enuReturnErrorStatus  = WrongPinNo;
                    }
	            /*-----------------------------------*/

	            /*pin0*/
	            case Pin0:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin0);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin0);
		            break;
	            }
	            break;
	            /*---*/

	            /*pin1*/
	            case Pin1:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin1);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin1);
		            break;
	            }
	            break;
	            /*----*/
	            
	            /*pin2*/
	            case Pin2:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin2);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin2);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin3*/
	            case Pin3:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin3);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin3);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin4*/
	            case Pin4:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin4);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin4);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin5*/
	            case Pin5:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin5);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin5);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin6*/
	            case Pin6:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin6);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin6);
		            break;
	            }
	            break;
	            /*----*/

	            /*pin7*/
	            case Pin7:
	            switch(Add_PORT_strConfigArray[j].PORT_enumPinDir)
	            {
		            case(Port_PinDir_Output):
		            SET_BIT(DDRA,Pin7);
		            break;
		            case(Port_PinDir_Input):
		            SET_BIT(DDRA,Pin7);
		            break;
	            }
	            break;
	            /*----*/
	       break;
            }
        /*----*/          
        }
    }    
return PORT_enuReturnErrorStatus;
}
