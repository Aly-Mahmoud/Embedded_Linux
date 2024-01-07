#ifndef PORT_Config_H_
#define PORT_Config_H_


   /*---------------------------------------Object Like Macros-----------------------------------*/
                                                                                                
      /*----Object like macros for compilation mode----*/                                       
                                                                                                                                    
         #define Pre_Compile         0                                                                                                                                 
         #define Post_Compile        1   
         #define PostCompile_HAL     2

      /*------------------------------------------------*/                                                                                                                              
                                                                                                                                                                              
      /*----Object like macros for target port----*/                                                                                                                                 
                                                                                                                                    
         #define One_Port            1                                                                                                                                 
         #define Two_Ports           2                                                                                                                                 
         #define Three_Ports         3                                                                                                                                 
         #define Four_Ports          4  

      /*------------------------------------------------*/                                                                                                                               
                                                                                                                                    
      /*----Object like macros for total pins numbers----*/    
       
         /*one port*/
            #define One_Port_6Pins   6
            #define One_Port_7Pins   7
            #define One_Port_8Pins   8
         /*------*/

         /*two port*/
            #define Two_Port_6Pins  14 
            #define Two_Port_7Pins  15                                                                                                                                
            #define Two_Port_8Pins  16
         /*------*/

         /*three ports*/
            #define Three_Port_6Pins 22
            #define Three_Port_7Pins 23                                                                                                                                 
            #define Three_Port_8Pins 24
         /*-----------*/

         /*four ports*/
            #define Four_Port_6Pins  30  
            #define Four_Port_7Pins  31
            #define Four_Port_8Pins  32  
         /*----------*/

      /*-------------------------------------------------*/  

      /*--Object like macros for pin numbers in one port-*/ 
         #define  Six_Pins   6
         #define  Seven_Pins 7
         #define  Eight_pins 8
      /*-------------------------------------------------*/                                                                                                                                                                                                                                                                                                                                             
                                                                                                      
      /*----(DDR) Data Direction Registry-------*/                                                                                                                                 
                                                                                                                                    
         #define Input               0                                                                                                                                 
         #define Output              1     

      /*----------------------------------------*/                                                                                                                               
                                                                                                                                    
      /*--------------Pin Config-----------*/    

            /*------For Output----*/                                                                                                                                                                                                                                                    
                  #define Logical_Low          0                                                                                                                                 
                  #define Logical_High         1         
            /*-------------------------*/   

            /*------For Input----*/                                                                                                                                                                                                                                                      
               #define Input_Pull_Up        0                                                                                                                                 
               #define Input_Pull_Down      1  
            /*--------------------*/  

      /*-----------------------------------*/

   /*--------------------------------------------------------------------------------------------*/

   /*----------------------------------------DevUser Choices-------------------------------------*/

                           /*Choose the Compilation Process type for Pre-compile*/
                                 //Choices:
                                 //1) Pre_Compile
                                 //2) Post_Compile   
                                 //3) PostCompile_HAL 
                                 // configuration mode
                           /*---------------------------------------------------*/

      #define Compilation_Process PostCompile_HAL

                           /*Choose how many port registers you have for Pre-compile*/
                                 //Choices:
                                 //1) One_Port
                                 //2) Two_Port
                                 //3) Three_Port
                                 //4) Four_Port
                           /*--------------------------------------------------------*/

      #define Ports_Numbers   Four_Ports

                           /*Choose how many pins your register have for Pre_compile*/
                                 //Choices:
                                 //1) Six_Pins
                                 //2) Seven_Pins
                                 //3) Eight_pins   
                           /*-------------------------------------------------------*/
      #define Pin_Numbers     Eight_pins

   /*--------------------------------------------------------------------------------------------*/

   /*-----------------------------------DevUser Choices Pre_Compile------------------------------*/
      #if (Compilation_Process == Pre_Compile)
         /*--------------------port A Config----------------------*/
            /*no need to check as the mC must have at least one port*/
            #define PortA_Pin0_Config  Output
            #define PortA_Pin1_Config  Output
            #define PortA_Pin2_Config  Output
            #define PortA_Pin3_Config  Output
            #define PortA_Pin4_Config  Output
            #define PortA_Pin5_Config  Output

               #if (Pin_Numbers == Seven_Pins)
                  #define PortB_Pin6_Config  Output
               

               #elif (Pin_Numbers == Eight_pins)
                  #define PortB_Pin6_Config  Output
                  #define PortB_Pin7_Config  Output
               #endif

         /*-------------------------------------------------------*/
      
         /*--------------------Port B Config--------------------*/

          #if (Ports_Numbers == Two_Ports || Ports_Numbers == Three_Ports || Ports_Numbers == Four_Ports )

            #define PortB_Pin0_Config  Output
            #define PortB_Pin1_Config  Output
            #define PortB_Pin2_Config  Output
            #define PortB_Pin3_Config  Output
            #define PortB_Pin4_Config  Output
            #define PortB_Pin5_Config  Output

            #if (Pin_Numbers == Seven_Pins)
               #define PortB_Pin6_Config  Output
            

            #elif (Pin_Numbers == Eight_pins)
               #define PortB_Pin6_Config  Output
               #define PortB_Pin7_Config  Output
            #endif

          #endif

         /*-----------------------------------------------------*/

         /*--------------------Port C Config--------------------*/

          #if ( Ports_Numbers == Three_Ports || Ports_Numbers == Four_Ports )

            #define PortC_Pin0_Config  Input_Pull_Down
            #define PortC_Pin1_Config  Output
            #define PortC_Pin2_Config  Output
            #define PortC_Pin3_Config  Output
            #define PortC_Pin4_Config  Output
            #define PortC_Pin5_Config  Output

            #if (Pin_Numbers == Seven_Pins)
               #define PortC_Pin6_Config  Output
            

            #elif (Pin_Numbers == Eight_pins)
               #define PortC_Pin6_Config  Output
               #define PortC_Pin7_Config  Output
            #endif

          #endif

         /*-----------------------------------------------------*/

         /*--------------------Port D Config--------------------*/

          #if ( Ports_Numbers == Four_Ports )

            #define PortD_Pin0_Config  Output
            #define PortD_Pin1_Config  Output
            #define PortD_Pin2_Config  Output
            #define PortD_Pin3_Config  Output
            #define PortD_Pin4_Config  Output
            #define PortD_Pin5_Config  Output

            #if (Pin_Numbers == Seven_Pins)
               #define PortD_Pin6_Config  Output

            #elif (Pin_Numbers == Eight_pins)
               #define PortD_Pin6_Config  Output
               #define PortD_Pin7_Config  Output
            #endif

          #endif

         /*-----------------------------------------------------*/

   /*--------------------------------------------------------------------------------------------*/

   /*------------------------------------------Post_Compile---------------------------------------*/
      #elif (Compilation_Process == Post_Compile)

         /*-------------------------enum for ports-------------------------*/

            typedef enum {
                           PortA,
                           PortB,
                           PortC,
                           PortD
            }Port_enumPortNumber_t;

         /*----------------------------------------------------------------*/

         /*----------------enum for each pin in each port------------------*/

            typedef enum{
                           PortA_Pin0,
                           PortA_Pin1,
                           PortA_Pin2,
                           PortA_Pin3,
                           PortA_Pin4,
                           PortA_Pin5,
                           PortA_Pin6,
                           PortA_Pin7,
                           PortB_Pin0,
                           PortB_Pin1,
                           PortB_Pin2,
                           PortB_Pin3,
                           PortB_Pin4,
                           PortB_Pin5,
                           PortB_Pin6,
                           PortB_Pin7,
                           PortC_Pin0,
                           PortC_Pin1,
                           PortC_Pin2,
                           PortC_Pin3,
                           PortC_Pin4,
                           PortC_Pin5,
                           PortC_Pin6,
                           PortC_Pin7,
                           PortD_Pin0,
                           PortD_Pin1,
                           PortD_Pin2,
                           PortD_Pin3,
                           PortD_Pin4,
                           PortD_Pin5,
                           PortD_Pin6,
                           PortD_Pin7
            }PORT_enumPinNumber_t;

         /*----------------------------------------------------------------*/

         /*---------------------enum for Direction------------------------ */

            typedef enum{
                        Port_PinDir_Output,
                        Port_PinDir_Input
            }PORT_enumPinDir_t;

         /*----------------------------------------------------------------*/

         /*-----------------enum for Port Register State-------------------*/
            typedef enum{
                        PortPin_High,
                        PortPin_low
            }PORT_enumPinStatus_t;
         /*----------------------------------------------------------------*/

         /*struct to have all the data from those enums and to be put as the element of the array to be made in Port_confi.c file*/
            typedef struct {
                           PORT_enumPinNumber_t  PortNumber_PinNumber;
                           PORT_enumPinDir_t     Pin_Dir;
                           PORT_enumPinStatus_t    Pin_Status;
            }PORT_strConfig_t;
               /*----------------------------------------------------------------------------------------------------------------------*/
         /*---------------------------------------------------------------------------------------------*/
   /*---------------------------------------------------------------------------------------------*/

   /*----------------------------------------PostCompile_HAL--------------------------------------*/
      #elif  (Compilation_Process == PostCompile_HAL)

         /*-------------------------enum for ports-------------------------*/

            typedef enum {
                           PortA,
                           PortB,
                           PortC,
                           PortD
            }Port_enumPortNumber_t;

         /*----------------------------------------------------------------*/

         /*-------------------------enum for pins--------------------------*/
            typedef enum {
                           Pin0,
                           Pin1,
                           Pin2,
                           Pin3,
                           Pin4,
                           Pin5,
                           Pin6,
                           Pin7
            }Port_enumPinNumber_t;            
         /*----------------------------------------------------------------*/

         /*-----------------------enum for Direction---------------------- */

            typedef enum{
                        Port_PinDir_Output,
                        Port_PinDir_Input
            }PORT_enumPinDir_t;

         /*----------------------------------------------------------------*/

         /*struct to have all the data from those enums and to be put as the element of the array that is sent from HAL Driver*/
            typedef struct {
                           Port_enumPortNumber_t  Port_enumPortNumber;
                           Port_enumPinNumber_t   Port_enumPinNumber;
                           PORT_enumPinDir_t      PORT_enumPinDir;
            }PORT_strConfig_t;
               /*----------------------------------------------------------------------------------------------------------------------*/
         /*-------------------------------------------------------------------------------------------------------------------*/

         /*------------------enum for Error in PORT Driver-----------------*/
            typedef enum {
                           OK,
                           NOK,
                           NullPointer,
                           WrongPortNo,
                           WrongPinNo,
               }PORT_enuErrorStatus_t;         
         /*----------------------------------------------------------------*/
      #endif
   /*---------------------------------------------------------------------------------------------*/

#endif