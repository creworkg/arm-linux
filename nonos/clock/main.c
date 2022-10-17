#include "led.h"
#include "clock.h"


int main(void)
{

    // init led
    init_led();
    // toggle led
    int n = 10;
    while (--n) {
        led_toggle();
    }
    
    //clock config
    arm_clk_config();
    // toggle led
    while (--n) {
        led_toggle();
    }
}
