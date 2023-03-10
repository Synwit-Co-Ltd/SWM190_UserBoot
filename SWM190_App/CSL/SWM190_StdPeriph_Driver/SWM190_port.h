#ifndef __SWM190_PORT_H__
#define __SWM190_PORT_H__

void PORT_Init(PORT_TypeDef * PORTx, uint32_t n, uint32_t func, uint32_t digit_in_en);	//端口引脚功能选择，其可取值如下：



#define PORTA_PIN0_GPIO		 	0
#define PORTA_PIN0_UART0_RX     1
#define PORTA_PIN0_PWM_BRK2		2
#define PORTA_PIN0_TIMR1_IN		3
#define PORTA_PIN0_TIMR1_OUT	4

#define PORTA_PIN1_GPIO			0
#define PORTA_PIN1_UART0_TX     1
#define PORTA_PIN1_TIMR0_IN		2
#define PORTA_PIN1_TIMR0_OUT	3
#define PORTA_PIN1_OPA0_INP		7
#define PORTA_PIN1_ACMP0_INP	7

#define PORTA_PIN2_GPIO			0
#define PORTA_PIN2_SWCLK		1

#define PORTA_PIN3_GPIO			0
#define PORTA_PIN3_SPI1_SSEL	1
#define PORTA_PIN3_PWM1B		2
#define PORTA_PIN3_SWDIO		3

#define PORTA_PIN4_GPIO			0
#define PORTA_PIN4_SPI1_MISO	1
#define PORTA_PIN4_PWM0B		2
#define PORTA_PIN4_TIMR0_IN		3
#define PORTA_PIN4_TIMR0_OUT	4

#define PORTA_PIN5_GPIO			0
#define PORTA_PIN5_I2C1_SDA		1
#define PORTA_PIN5_SPI1_MOSI	2
#define PORTA_PIN5_UART2_RX		3
#define PORTA_PIN5_PWM1A		4
#define PORTA_PIN5_TIMR1_IN		5
#define PORTA_PIN5_TIMR1_OUT	6

#define PORTA_PIN6_GPIO			0
#define PORTA_PIN6_I2C1_SCL		1
#define PORTA_PIN6_SPI1_SCLK	2
#define PORTA_PIN6_UART2_TX		3
#define PORTA_PIN6_PWM0A		4
#define PORTA_PIN6_OPA0_INN		7
#define PORTA_PIN6_ACMP0_INN	7

#define PORTA_PIN7_GPIO			0
#define PORTA_PIN7_UART1_TX		1
#define PORTA_PIN7_PWM_BRK1		2
#define PORTA_PIN7_TIMR2_IN		3
#define PORTA_PIN7_TIMR2_OUT	4

#define PORTA_PIN8_GPIO		 	0
#define PORTA_PIN8_SPI0_SSEL	1
#define PORTA_PIN8_UART1_RX		2
#define PORTA_PIN8_OPA0_OUT		7

#define PORTA_PIN9_GPIO			0
#define PORTA_PIN9_SPI0_MISO	1
#define PORTA_PIN9_TIMR3_IN	    2
#define PORTA_PIN9_TIMR3_OUT	3
#define PORTA_PIN9_OPA3_OUT		7

#define PORTA_PIN10_GPIO		0
#define PORTA_PIN10_SPI0_MOSI	1
#define PORTA_PIN10_OPA3_INN	7

#define PORTA_PIN11_GPIO		0
#define PORTA_PIN11_SPI0_SCLK	1
#define PORTA_PIN11_PWM1B		2
#define PORTA_PIN11_OPA3_INP	7

#define PORTA_PIN12_GPIO		0
#define PORTA_PIN12_SPI0_SSEL	1
#define PORTA_PIN12_UART0_CTS	2
#define PORTA_PIN12_PWM1AN		3
#define PORTA_PIN12_TIMR1_IN	4
#define PORTA_PIN12_TIMR1_OUT	5
#define PORTA_PIN12_ADC0_IN4	7

#define PORTA_PIN13_GPIO		0
#define PORTA_PIN13_SPI0_MISO	1
#define PORTA_PIN13_UART0_RTS	2
#define PORTA_PIN13_PWM1A		3
#define PORTA_PIN13_TIMR2_IN	4
#define PORTA_PIN13_TIMR2_OUT	5
#define PORTA_PIN13_ADC0_IN3	7
#define PORTA_PIN13_OPA2_INN	7
#define PORTA_PIN13_ACMP2_INN	7

#define PORTA_PIN14_GPIO		0
#define PORTA_PIN14_I2C1_SDA	1
#define PORTA_PIN14_SPI0_MOSI	2
#define PORTA_PIN14_UART0_RX	3
#define PORTA_PIN14_PWM2BN		4
#define PORTA_PIN14_ADC0_IN2	7
#define PORTA_PIN14_OPA2_INP	7
#define PORTA_PIN14_ACMP2_INP	7

#define PORTA_PIN15_GPIO		0
#define PORTA_PIN15_I2C1_SCL	1
#define PORTA_PIN15_SPI0_SCLK	2
#define PORTA_PIN15_UART0_TX	3
#define PORTA_PIN15_PWM2B		4
#define PORTA_PIN15_TIMR3_IN	5
#define PORTA_PIN15_TIMR3_OUT	6
#define PORTA_PIN15_ADC0_IN1	7


#define PORTB_PIN0_GPIO		 	0

#define PORTB_PIN1_GPIO			0
#define PORTB_PIN1_SPI0_DAT3	1
#define PORTB_PIN1_PWM0A      	2
#define PORTB_PIN1_TIMR3_IN		3
#define PORTB_PIN1_TIMR3_OUT	4
#define PORTB_PIN1_OPA1_INN		7
#define PORTB_PIN1_ACMP1_INN	7

#define PORTB_PIN2_GPIO			0
#define PORTB_PIN2_SPI0_DAT2	1
#define PORTB_PIN2_UART2_CTS	2
#define PORTB_PIN2_PWM0AN		3
#define PORTB_PIN2_OPA1_INP		7
#define PORTB_PIN2_ACMP1_INP	7

#define PORTB_PIN3_GPIO			0
#define PORTB_PIN3_SPI0_SSEL	1
#define PORTB_PIN3_UART2_RTS	2
#define PORTB_PIN3_PWM0B		3
#define PORTB_PIN3_HALL_IN0		4

#define PORTB_PIN4_GPIO			0
#define PORTB_PIN4_I2C1_SDA		1
#define PORTB_PIN4_SPI0_MISO	2
#define PORTB_PIN4_UART3_TX		3
#define PORTB_PIN4_PWM0BN		4
#define PORTB_PIN4_HALL_IN1		5
#define PORTB_PIN4_TIMR2_IN		6
#define PORTB_PIN4_TIMR2_OUT	7

#define PORTB_PIN5_GPIO			0
#define PORTB_PIN5_I2C1_SCL		1
#define PORTB_PIN5_SPI0_MOSI	2
#define PORTB_PIN5_UART3_RX		3
#define PORTB_PIN5_PWM1A		4
#define PORTB_PIN5_TIMR1_IN		5
#define PORTB_PIN5_TIMR1_OUT	6

#define PORTB_PIN6_GPIO			0
#define PORTB_PIN6_SPI0_SCLK	1
#define PORTB_PIN6_PWM1AN		2
#define PORTB_PIN6_TIMR0_IN		3
#define PORTB_PIN6_TIMR0_OUT	4
#define PORTB_PIN6_OPA1_OUT		7

#define PORTB_PIN7_GPIO			0
#define PORTB_PIN7_UART2_RX		1
#define PORTB_PIN7_PWM_BRK0		2

#define PORTB_PIN8_GPIO		 	0
#define PORTB_PIN8_UART2_TX		1
#define PORTB_PIN8_HALL_IN2		2

#define PORTB_PIN9_GPIO			0
#define PORTB_PIN9_TIMR2_IN		1
#define PORTB_PIN9_TIMR2_OUT	2

#define PORTB_PIN10_GPIO		0
#define PORTB_PIN10_TIMR1_IN	1
#define PORTB_PIN10_TIMR1_OUT	2

#define PORTB_PIN11_GPIO		0
#define PORTB_PIN11_UART1_TX	1

#define PORTB_PIN12_GPIO		0
#define PORTB_PIN12_UART1_RX	1

#define PORTB_PIN13_GPIO		0

#define PORTB_PIN14_GPIO		0
#define PORTB_PIN14_I2C0_SDA	1
#define PORTB_PIN14_SPI1_DAT3	2
#define PORTB_PIN14_UART1_CTS	3
#define PORTB_PIN14_ADC1_IN7	7

#define PORTB_PIN15_GPIO		0
#define PORTB_PIN15_I2C0_SCL	1
#define PORTB_PIN15_SPI1_DAT2	2
#define PORTB_PIN15_UART1_RTS	3
#define PORTB_PIN15_ADC1_IN6	7


#define PORTC_PIN0_GPIO			0
#define PORTC_PIN0_PWM3A		1
#define PORTC_PIN0_XTAL_OUT		7

#define PORTC_PIN1_GPIO			0
#define PORTC_PIN1_PWM3AN		1
#define PORTC_PIN1_XTAL_IN		7

#define PORTC_PIN2_GPIO			0
#define PORTC_PIN2_UART1_TX		1
#define PORTC_PIN2_PWM1AN		2
#define PORTC_PIN2_ADC1_IN5		7

#define PORTC_PIN3_GPIO			0
#define PORTC_PIN3_UART1_RX		1
#define PORTC_PIN3_PWM1A		2
#define PORTC_PIN3_ADC1_IN4		7

#define PORTC_PIN4_GPIO			0
#define PORTC_PIN4_SPI1_SSEL	1
#define PORTC_PIN4_PWM2A		2
#define PORTC_PIN4_TIMR1_IN		3
#define PORTC_PIN4_TIMR1_OUT	4
#define PORTC_PIN4_ADC1_IN3		7

#define PORTC_PIN5_GPIO			0
#define PORTC_PIN5_SPI1_MISO	1
#define PORTC_PIN5_PWM2AN		2
#define PORTC_PIN5_TIMR0_IN		3
#define PORTC_PIN5_TIMR0_OUT	4
#define PORTC_PIN5_ADC1_IN2		7

#define PORTC_PIN6_GPIO			0
#define PORTC_PIN6_SPI1_MOSI	1
#define PORTC_PIN6_UART2_RX		2
#define PORTC_PIN6_PWM3B		3
#define PORTC_PIN6_ADC0_IN6		7

#define PORTC_PIN7_GPIO			0
#define PORTC_PIN7_SPI1_SCLK	1
#define PORTC_PIN7_UART2_TX		2
#define PORTC_PIN7_PWM3BN		3
#define PORTC_PIN7_ADC0_IN5		7


#define PORTD_PIN0_GPIO			0
#define PORTD_PIN0_I2C1_SDA		1
#define PORTD_PIN0_UART0_RX		2
#define PORTD_PIN0_ADC1_IN1		7

#define PORTD_PIN1_GPIO			0
#define PORTD_PIN1_I2C1_SCL		1
#define PORTD_PIN1_UART0_TX		2
#define PORTD_PIN1_TIMR2_IN		3
#define PORTD_PIN1_TIMR2_OUT	4
#define PORTD_PIN1_ADC1_IN0		7

#define PORTD_PIN2_GPIO			0
#define PORTD_PIN2_UART3_CTS	1
#define PORTD_PIN2_PWM1B		2
#define PORTD_PIN2_TIMR3_IN		3
#define PORTD_PIN2_TIMR3_OUT	4

#define PORTD_PIN3_GPIO			0
#define PORTD_PIN3_UART3_RTS	1
#define PORTD_PIN3_PWM1BN		2
#define PORTD_PIN3_TIMR2_IN		3
#define PORTD_PIN3_TIMR2_OUT	4

#define PORTD_PIN4_GPIO			0
#define PORTD_PIN4_I2C0_SDA		1
#define PORTD_PIN4_UART3_TX		2
#define PORTD_PIN4_PWM2B		3

#define PORTD_PIN5_GPIO			0
#define PORTD_PIN5_I2C0_SCL		1
#define PORTD_PIN5_UART3_RX		2
#define PORTD_PIN5_PWM2BN		3

#define PORTD_PIN6_GPIO			0
#define PORTD_PIN6_I2S1_MCLK	1

#define PORTD_PIN7_GPIO			0
#define PORTD_PIN7_I2S0_MCLK	1
#define PORTD_PIN7_OPA2_OUT		7


#define PORTE_PIN0_GPIO			0
#define PORTE_PIN0_I2C0_SDA		1
#define PORTE_PIN0_SPI1_DAT3	2
#define PORTE_PIN0_PWM3A		3

#define PORTE_PIN1_GPIO			0
#define PORTE_PIN1_I2C0_SCL		1
#define PORTE_PIN1_SPI1_DAT2	2
#define PORTE_PIN1_PWM3AN		3

#define PORTE_PIN2_GPIO			0
#define PORTE_PIN2_SPI0_DAT3	1
#define PORTE_PIN2_PWM3B		2

#define PORTE_PIN3_GPIO			0
#define PORTE_PIN3_SPI0_DAT2	1
#define PORTE_PIN3_PWM3BN		2

#define PORTE_PIN4_GPIO			0
#define PORTE_PIN4_ADC0_IN0		7

#define PORTE_PIN5_GPIO			0
#define PORTE_PIN5_UART1_RX		1
#define PORTE_PIN5_PWM2A		2
#define PORTE_PIN5_TIMR1_IN		3
#define PORTE_PIN5_TIMR1_OUT	4

#define PORTE_PIN6_GPIO			0
#define PORTE_PIN6_PWM2AN		1
#define PORTE_PIN6_TIMR2_IN		2
#define PORTE_PIN6_TIMR2_OUT	3

#define PORTE_PIN7_GPIO			0
#define PORTE_PIN7_UART1_TX		1
#define PORTE_PIN7_TIMR3_IN		2
#define PORTE_PIN7_TIMR3_OUT	3


#endif //__SWM190_PORT_H__
