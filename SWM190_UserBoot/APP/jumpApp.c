#include "SWM190.h"

void jumpToApp(void)
{
	uint32_t i;
	uint32_t Flag;

	FLASH_Read(0x28, &Flag, 1);
	
	if(Flag == 2)
	{
		*((volatile uint32_t *)0x40000500) = 0x01;			// �ر� Cache
		
		for(i = 0; i < 0x8000/4; i++)
			((uint32_t *)0x0000)[i] = *((volatile unsigned int *)(0x41000000+0x0000+i*4));
	}
	else
	{
		*((volatile uint32_t *)0x40000500) = 0x02;			// ʹ�� Cache
		
		while(!(CACHE->CR & CACHE_CR_IDLE_Msk)) __NOP();
		CACHE->CR = (1 << CACHE_CR_RST_Pos);				// ��λ Cache
		__NOP();__NOP();__NOP();
	}
	
	SCB->AIRCR = ((0x5FA << SCB_AIRCR_VECTKEY_Pos) | SCB_AIRCR_SYSRESETREQ_Msk);	// �����λ
	__DSB();
	while(1);
}
