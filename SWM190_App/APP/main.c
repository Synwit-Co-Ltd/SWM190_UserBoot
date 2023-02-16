#include "SWM190.h"

void SerialInit(void);


int main(void)
{
 	uint32_t i;
	
	SystemInit();
	
	SerialInit();
	
	__enable_irq();	// UserBoot中关闭了全局中断，需要开启
	
	GPIO_Init(GPIOA, PIN4, 0, 1, 0, 0);		//输入，上拉使能，接KEY
 	
	GPIO_Init(GPIOA, PIN5, 1, 0, 0, 0);		//输出， 接LED
	
 	while(1==1)
 	{
 		GPIO_InvBit(GPIOA, PIN5);
		printf("Running in APP\r\n");
		for(i = 0; i < 6000000; i++) __NOP();
		
		
		if(GPIO_GetBit(GPIOA, PIN4) == 0)		// 按键按下
		{
			__disable_irq();
			
			WDT_Init(WDT, 0, 1000);
			WDT_Start(WDT);
			while(1) __NOP();					// 触发WDT复位，执行UserBoot
		}
 	}
}


void SerialInit(void)
{
	UART_InitStructure UART_initStruct;
	
	PORT_Init(PORTA, PIN1, PORTA_PIN1_UART0_TX, 0);	//GPIOA.1配置为UART0 TXD
	PORT_Init(PORTA, PIN0, PORTA_PIN0_UART0_RX, 1);	//GPIOA.0配置为UART0 RXD
 	
 	UART_initStruct.Baudrate = 57600;
	UART_initStruct.DataBits = UART_DATA_8BIT;
	UART_initStruct.Parity = UART_PARITY_NONE;
	UART_initStruct.StopBits = UART_STOP_1BIT;
	UART_initStruct.RXThreshold = 3;
	UART_initStruct.RXThresholdIEn = 0;
	UART_initStruct.TXThreshold = 3;
	UART_initStruct.TXThresholdIEn = 0;
	UART_initStruct.TimeoutTime = 10;
	UART_initStruct.TimeoutIEn = 0;
 	UART_Init(UART0, &UART_initStruct);
	UART_Open(UART0);
}

/****************************************************************************************************************************************** 
* 函数名称: fputc()
* 功能说明: printf()使用此函数完成实际的串口打印动作
* 输    入: int ch		要打印的字符
*			FILE *f		文件句柄
* 输    出: 无
* 注意事项: 无
******************************************************************************************************************************************/
int fputc(int ch, FILE *f)
{
	UART_WriteByte(UART0, ch);
	
	while(UART_IsTXBusy(UART0));
 	
	return ch;
}
