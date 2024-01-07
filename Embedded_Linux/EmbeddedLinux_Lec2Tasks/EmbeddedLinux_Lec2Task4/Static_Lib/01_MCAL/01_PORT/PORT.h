#ifndef  PORT_H_
#define  PORT_H_

    #include "PORT_Config.h"
    #include "Std_Types.h"
	
    void PORT_vidInit(void);

    PORT_enuErrorStatus_t PORT_PinConfig (PORT_strConfig_t *Add_PORT_strConfigArray, U8 Length);

#endif