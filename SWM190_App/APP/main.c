#include "SWM190.h"

void SerialInit(void);


int main(void)
{
 	uint32_t i;
	
	SystemInit();
	
	SerialInit();
	
	__enable_irq();	// UserBoot�йر���ȫ���жϣ���Ҫ����
	
	GPIO_Init(GPIOA, PIN4, 0, 1, 0, 0);		//���룬����ʹ�ܣ���KEY
 	
	GPIO_Init(GPIOA, PIN5, 1, 0, 0, 0);		//����� ��LED
	
 	while(1==1)
 	{
 		GPIO_InvBit(GPIOA, PIN5);
		printf("Running in APP\r\n");
		for(i = 0; i < 6000000; i++) __NOP();
		
		
		if(GPIO_GetBit(GPIOA, PIN4) == 0)		// ��������
		{
			__disable_irq();
			
			WDT_Init(WDT, 0, 1000);
			WDT_Start(WDT);
			while(1) __NOP();					// ����WDT��λ��ִ��UserBoot
		}
 	}
}


void SerialInit(void)
{
	UART_InitStructure UART_initStruct;
	
	PORT_Init(PORTA, PIN1, PORTA_PIN1_UART0_TX, 0);	//GPIOA.1����ΪUART0 TXD
	PORT_Init(PORTA, PIN0, PORTA_PIN0_UART0_RX, 1);	//GPIOA.0����ΪUART0 RXD
 	
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
* ��������: fputc()
* ����˵��: printf()ʹ�ô˺������ʵ�ʵĴ��ڴ�ӡ����
* ��    ��: int ch		Ҫ��ӡ���ַ�
*			FILE *f		�ļ����
* ��    ��: ��
* ע������: ��
******************************************************************************************************************************************/
int fputc(int ch, FILE *f)
{
	UART_WriteByte(UART0, ch);
	
	while(UART_IsTXBusy(UART0));
 	
	return ch;
}
