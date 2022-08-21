#ifndef __MAIN_H
#define __MAIN_H

// CCM Clock Gating Register 0 (CCM_CCGR0)
// define reg
#define CCM_CCGR0 *((volatile unsigned int *)0x020c4068)
#define CCM_CCGR1 *((volatile unsigned int *)0x020c406c)

#define SW_MUX_CTL_GPIO1_IO03 *((volatile unsigned int *)0x020e0068)
#define SW_PAD_CTL_GPIO1_IO03 *((volatile unsigned int *)0x020e02F4)

#define GPIO1_DR *((volatile unsigned int *)0X0209C000)
#define GPIO1_GDIR *((volatile unsigned int *)0X0209C004)
#define GPIO1_PSR *((volatile unsigned int *)0X0209C008)
#define GPIO1_ICR1 *((volatile unsigned int *)0X0209C00C)
#define GPIO1_ICR2 *((volatile unsigned int *)0X0209C010)
#define GPIO1_IMR *((volatile unsigned int *)0X0209C014)
#define GPIO1_ISR *((volatile unsigned int *)0X0209C018)
#define GPIO1_EDGE_SEL *((volatile unsigned int *)0X0209C01C)

#endif