#include "clock.h"
#include <stdint.h>

void arm_clk_config(void)
{
    if ((CCM_CCSR >> (uint32_t)2) & 0x1 == 0) {
        CCM_CCSR |= 1 << 8; // derive clock from osc_clk (24M)
        CCM_CCSR |= 1 << 2; // set step_clk to generate pll1_sw_clk
        // 0010 00000 0000000
        // 2<<12 0    44(528M) 66(792M)
        CCM_ANALOG_PLL_ARM |= (2 << 12 ) + ((44 << 0) & 0X7F); //enable PLL1 and set feq = 528M
        CCM_CACRR = 0;
        CCM_CCSR &= ~(1 << 2);
    }
}

