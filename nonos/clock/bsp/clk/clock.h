#ifndef __CLOCK_H__
#define __CLOCK_H__


#define CCM_CACRR               *(volatile unsigned int *)0x020e4000
#define CCM_CCSR                *(volatile unsigned int *)0x020C400C
#define CCM_ANALOG_PLL_ARM      *(volatile unsigned int *)0x020C8000

void arm_clk_config();





#endif /* __CLOCK_H__ */