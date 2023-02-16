#ifndef __SWM190_SLEEP_H__
#define __SWM190_SLEEP_H__


#if   defined ( __CC_ARM )

__asm void EnterSleepMode(void);
__asm void EnterStopMode(void);

#elif defined ( __ICCARM__ )

__ramfunc void EnterSleepMode(void);
__ramfunc void EnterStopMode(void);

#endif


#endif //__SWM190_SLEEP_H__
