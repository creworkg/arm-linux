#include "main.h"

void init_led(void)
{
    // OPEN CLOCK
    CCM_CCGR1 = 0xfffffff;

    // config io
    SW_MUX_CTL_GPIO1_IO03 = 0X05; 
    SW_PAD_CTL_GPIO1_IO03 = 0x10b0;

    GPIO1_GDIR = 0x08;
    GPIO1_DR = 0x0;
}

void delayshort(int i)
{
    while (i--);
}
void delayms(unsigned n)
{
    while (n--)
    {
        delayshort(0x7ff);
    }
}
void led_toggle(void)
{

    GPIO1_DR &= ~(1 << 3); // clear bit3
    delayms(500);
    GPIO1_DR |= (1 << 3); // set bit3
    delayms(500);
}

int main(void)
{
    // init led
    init_led();
    // toggle led
    while (1) {
        led_toggle();
    }


}