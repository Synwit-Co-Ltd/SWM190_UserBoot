#ifndef __SWM190_ADC_H__
#define	__SWM190_ADC_H__

typedef struct {
	uint8_t  clk_src;		//ADC转换时钟源：ADC_CLKSRC_HRC、ADC_CLKSRC_XTAL、...
	uint8_t  channels;		//ADC转换通道选中，ADC_CH0、ADC_CH1、... ... 、ADC_CH7及其组合（即“按位或”运算）
	uint8_t  samplAvg;		//采样取平均，触发启动ADC转换后，ADC在一个通道上连续采样、转换多次，并将它们的平均值作为该通道转换结果
	uint8_t  Continue;		//在软件触发模式下：1 连续转换模式，启动后一直采样、转换，直到软件清除START位
							//                  0 单次转换模式，转换完成后START位自动清除停止转换
	uint16_t trig_src;		//ADC触发方式：ADC_TRIGGER_SW、ADC_TRIGGER_TIMR2、ADC_TRIGGER_TIMR3、ADC_TRIGGER_PWM0A、ADC_TRIGGER_PWM0B、...，多个PWM触发可按位或
	uint8_t  EOC_IEn;		//EOC中断使能，可针对每个通道设置，其有效值为ADC_CH0、ADC_CH1、... ... 、ADC_CH7及其组合（即“按位或”运算）
	uint8_t  OVF_IEn;		//OVF中断使能，可针对每个通道设置，其有效值为ADC_CH0、ADC_CH1、... ... 、ADC_CH7及其组合（即“按位或”运算）
} ADC_InitStructure;

#define ADC_CH0		0x01
#define ADC_CH1		0x02
#define ADC_CH2		0x04
#define ADC_CH3		0x08
#define ADC_CH4		0x10
#define ADC_CH5		0x20
#define ADC_CH6		0x40
#define ADC_CH7		0x80

#define ADC_CLKSRC_HRC			0
#define ADC_CLKSRC_XTAL			1
#define ADC_CLKSRC_HRC_DIV4		4
#define ADC_CLKSRC_XTAL_DIV4	5
#define ADC_CLKSRC_HRC_DIV8		6
#define ADC_CLKSRC_XTAL_DIV8	7

#define ADC_AVG_SAMPLE1			0	
#define ADC_AVG_SAMPLE2			1	//一次启动连续采样、转换2次，并计算两次结果的平均值作为转换结果
#define ADC_AVG_SAMPLE4			3
#define ADC_AVG_SAMPLE8			7
#define ADC_AVG_SAMPLE16		15

#define ADC_TRIGGER_SW			0	//软件触发，即ADC->START.GO写1启动转换
#define ADC_TRIGGER_TIMR2		2
#define ADC_TRIGGER_TIMR3		3
#define ADC_TRIGGER_PWM0A		0x101
#define ADC_TRIGGER_PWM0B		0x102
#define ADC_TRIGGER_PWM1A		0x104
#define ADC_TRIGGER_PWM1B		0x108
#define ADC_TRIGGER_PWM2A		0x110
#define ADC_TRIGGER_PWM2B		0x120
#define ADC_TRIGGER_PWM3A		0x140
#define ADC_TRIGGER_PWM3B		0x180


void ADC_Init(ADC_TypeDef * ADCx, ADC_InitStructure * initStruct);		//ADC模数转换器初始化
uint32_t ADC_Calibrate(ADC_TypeDef * ADCx);
void ADC_Open(ADC_TypeDef * ADCx);							//ADC开启，可以软件启动、或硬件触发ADC转换
void ADC_Close(ADC_TypeDef * ADCx);							//ADC关闭，无法软件启动、或硬件触发ADC转换
void ADC_Start(ADC_TypeDef * ADCx);							//启动指定ADC，开始模数转换
void ADC_Stop(ADC_TypeDef * ADCx);							//关闭指定ADC，停止模数转换

uint32_t ADC_Read(ADC_TypeDef * ADCx, uint32_t chn);		//从指定通道读取转换结果
uint32_t ADC_IsEOC(ADC_TypeDef * ADCx, uint32_t chn);		//指定通道是否End Of Conversion

void ADC_ChnSelect(ADC_TypeDef * ADCx, uint32_t chns);

void ADC_IntEOCEn(ADC_TypeDef * ADCx, uint32_t chn);		//转换完成中断使能
void ADC_IntEOCDis(ADC_TypeDef * ADCx, uint32_t chn);		//转换完成中断禁止
void ADC_IntEOCClr(ADC_TypeDef * ADCx, uint32_t chn);		//转换完成中断标志清除
uint32_t ADC_IntEOCStat(ADC_TypeDef * ADCx, uint32_t chn);	//转换完成中断状态

void ADC_IntOVFEn(ADC_TypeDef * ADCx, uint32_t chn);		//数据溢出中断使能
void ADC_IntOVFDis(ADC_TypeDef * ADCx, uint32_t chn);		//数据溢出中断禁止
void ADC_IntOVFClr(ADC_TypeDef * ADCx, uint32_t chn);		//数据溢出中断标志清除
uint32_t ADC_IntOVFStat(ADC_TypeDef * ADCx, uint32_t chn);	//数据溢出中断状态


#endif //__SWM190_ADC_H__
