#include "PORT_Config.h"

#include "Port.h"

#include "Std_Types.h"

#if (Compilation_Process == Post_Compile)

 /*--------4 ports-------*/
	/*4 Ports, 8 Pins*/
		#if (Ports_Numbers==Four_Ports && Pin_Numbers == Eight_pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
						{PortA_Pin7, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Output,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
						{PortB_Pin6, Port_PinDir_Output,PortPin_low },
						{PortB_Pin7, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port C*/
						{PortC_Pin0, Port_PinDir_Input,PortPin_low },
						{PortC_Pin1, Port_PinDir_Output,PortPin_low },
						{PortC_Pin2, Port_PinDir_Output,PortPin_low },
						{PortC_Pin3, Port_PinDir_Output,PortPin_low },
						{PortC_Pin4, Port_PinDir_Output,PortPin_low },
						{PortC_Pin5, Port_PinDir_Output,PortPin_low },
						{PortC_Pin6, Port_PinDir_Output,PortPin_low },
						{PortC_Pin7, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port D*/
						{PortD_Pin0, Port_PinDir_Output,PortPin_low },
						{PortD_Pin1, Port_PinDir_Output,PortPin_low },
						{PortD_Pin2, Port_PinDir_Output,PortPin_low },
						{PortD_Pin3, Port_PinDir_Output,PortPin_low },
						{PortD_Pin4, Port_PinDir_Output,PortPin_low },
						{PortD_Pin5, Port_PinDir_Output,PortPin_low },
						{PortD_Pin6, Port_PinDir_Output,PortPin_low },
						{PortD_Pin7, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/	

	/*4 Ports, 7 Pins*/
		#if (Ports_Numbers==Four_Ports && Pin_Numbers == Seven_Pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Output,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
						{PortB_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port C*/
						{PortC_Pin0, Port_PinDir_Input,PortPin_low },
						{PortC_Pin1, Port_PinDir_Output,PortPin_low },
						{PortC_Pin2, Port_PinDir_Output,PortPin_low },
						{PortC_Pin3, Port_PinDir_Output,PortPin_low },
						{PortC_Pin4, Port_PinDir_Output,PortPin_low },
						{PortC_Pin5, Port_PinDir_Output,PortPin_low },
						{PortC_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port D*/
						{PortD_Pin0, Port_PinDir_Output,PortPin_low },
						{PortD_Pin1, Port_PinDir_Output,PortPin_low },
						{PortD_Pin2, Port_PinDir_Output,PortPin_low },
						{PortD_Pin3, Port_PinDir_Output,PortPin_low },
						{PortD_Pin4, Port_PinDir_Output,PortPin_low },
						{PortD_Pin5, Port_PinDir_Output,PortPin_low },
						{PortD_Pin6, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/	

	/*4 Ports, 6 Pins*/
		#if (Ports_Numbers==Four_Ports && Pin_Numbers == Six_Pin)
				PORT_srtConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Output,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
						{PortB_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port C*/
						{PortC_Pin0, Port_PinDir_Input,PortPin_low },
						{PortC_Pin1, Port_PinDir_Output,PortPin_low },
						{PortC_Pin2, Port_PinDir_Output,PortPin_low },
						{PortC_Pin3, Port_PinDir_Output,PortPin_low },
						{PortC_Pin4, Port_PinDir_Output,PortPin_low },
						{PortC_Pin5, Port_PinDir_Output,PortPin_low },
						{PortC_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port D*/
						{PortD_Pin0, Port_PinDir_Output,PortPin_low },
						{PortD_Pin1, Port_PinDir_Output,PortPin_low },
						{PortD_Pin2, Port_PinDir_Output,PortPin_low },
						{PortD_Pin3, Port_PinDir_Output,PortPin_low },
						{PortD_Pin4, Port_PinDir_Output,PortPin_low },
						{PortD_Pin5, Port_PinDir_Output,PortPin_low },
						{PortD_Pin6, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/	
 /*----------------------*/

 /*--------3 Ports-------*/
	/*3 Ports, 8 Pins*/
		#if (Ports_Numbers== Three_Ports && Pin_Numbers == Eight_pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
						{PortA_Pin7, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Output,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
						{PortB_Pin6, Port_PinDir_Output,PortPin_low },
						{PortB_Pin7, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port C*/
						{PortC_Pin0, Port_PinDir_Input,PortPin_low },
						{PortC_Pin1, Port_PinDir_Output,PortPin_low },
						{PortC_Pin2, Port_PinDir_Output,PortPin_low },
						{PortC_Pin3, Port_PinDir_Output,PortPin_low },
						{PortC_Pin4, Port_PinDir_Output,PortPin_low },
						{PortC_Pin5, Port_PinDir_Output,PortPin_low },
						{PortC_Pin6, Port_PinDir_Output,PortPin_low },
						{PortC_Pin7, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/	

	/*3 Ports, 7 Pins*/
		#if (Ports_Numbers== Three_Ports && Pin_Numbers == Seven_Pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Output,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
						{PortB_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port C*/
						{PortC_Pin0, Port_PinDir_Input,PortPin_low },
						{PortC_Pin1, Port_PinDir_Output,PortPin_low },
						{PortC_Pin2, Port_PinDir_Output,PortPin_low },
						{PortC_Pin3, Port_PinDir_Output,PortPin_low },
						{PortC_Pin4, Port_PinDir_Output,PortPin_low },
						{PortC_Pin5, Port_PinDir_Output,PortPin_low },
						{PortC_Pin6, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/

	/*3 Ports, 6 Pins*/
		#if (Ports_Numbers== Three_Ports && Pin_Numbers == Six_Pin)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Output,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port C*/
						{PortC_Pin0, Port_PinDir_Input,PortPin_low },
						{PortC_Pin1, Port_PinDir_Output,PortPin_low },
						{PortC_Pin2, Port_PinDir_Output,PortPin_low },
						{PortC_Pin3, Port_PinDir_Output,PortPin_low },
						{PortC_Pin4, Port_PinDir_Output,PortPin_low },
						{PortC_Pin5, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/

 /*----------------------*/	

 /*--------2 Ports-------*/
	/*2 Ports, 8 Pins*/
		#if (Ports_Numbers== Two_Ports && Pin_Numbers == Eight_pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
						{PortA_Pin7, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Input,PortPin_low  },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
						{PortB_Pin6, Port_PinDir_Output,PortPin_low },
						{PortB_Pin7, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/			

	/*2 Ports, 7 Pins*/
		#if (Ports_Numbers== Two_Ports && Pin_Numbers == Seven_Pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Input,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low },
						{PortB_Pin6, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/	

	/*2 Ports, 6 Pins*/
		#if (Ports_Numbers== Two_Ports && Pin_Numbers == Six_Pin)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
					/*-----*/

					/*Port B*/
						{PortB_Pin0, Port_PinDir_Input,PortPin_low },
						{PortB_Pin1, Port_PinDir_Output,PortPin_low },
						{PortB_Pin2, Port_PinDir_Output,PortPin_low },
						{PortB_Pin3, Port_PinDir_Output,PortPin_low },
						{PortB_Pin4, Port_PinDir_Output,PortPin_low },
						{PortB_Pin5, Port_PinDir_Output,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/	
 /*----------------------*/	

 /*---------1 Ports------*/
	/*1 Ports, 8 Pins*/
		#if (Ports_Numbers== One_Port && Pin_Numbers == Eight_pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low },
						{PortA_Pin7, Port_PinDir_Input,PortPin_low }
					/*-----*/

				};
		#endif
	/*---------------*/

	/*1 Ports, 7 Pins*/
		#if (Ports_Numbers== One_Port && Pin_Numbers == Seven_Pins)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low },
						{PortA_Pin6, Port_PinDir_Output,PortPin_low }
					/*-----*/
					
				};
		#endif
	/*---------------*/

	/*1 Ports, 6 Pins*/
		#if (Ports_Numbers== One_Port && Pin_Numbers == Six_Pin)
				PORT_strConfig_t PORT_Configration_Array[]=
				{

					/*Port A*/
						{PortA_Pin0, Port_PinDir_Output,PortPin_low },
						{PortA_Pin1, Port_PinDir_Output,PortPin_low },
						{PortA_Pin2, Port_PinDir_Output,PortPin_low },
						{PortA_Pin3, Port_PinDir_Output,PortPin_low },
						{PortA_Pin4, Port_PinDir_Output,PortPin_low },
						{PortA_Pin5, Port_PinDir_Output,PortPin_low }
					/*-----*/
					
				};
		#endif
	/*---------------*/
 /*----------------------*/

 #elif (Compilation_Process == PostCompile_HAL) 		

  /*For HAL Comp*/
	PORT_strConfig_t PORT_arrofstr_HALComp[Ports_Numbers * Pin_Numbers];
  /*-------------*/

 #endif
	
