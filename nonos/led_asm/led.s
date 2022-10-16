/**
驱动一个gpio，需要以下几个步骤：
1. 使能时钟
2. 设置io复用
3. 设置io电气属性
4. 设置io中断
 */

.global _start

_start:
    ldr r0, =0X020C4068 	/* CCGR0 */
	ldr r1, =0XFFFFFFFF  
	str r1, [r0]		
	
	ldr r0, =0X020C406C  	/* CCGR1 */
	str r1, [r0]

	ldr r0, =0X020C4070  	/* CCGR2 */
	str r1, [r0]
	
	ldr r0, =0X020C4074  	/* CCGR3 */
	str r1, [r0]
	
	ldr r0, =0X020C4078  	/* CCGR4 */
	str r1, [r0]
	
	ldr r0, =0X020C407C  	/* CCGR5 */
	str r1, [r0]
	
	ldr r0, =0X020C4080  	/* CCGR6 */
	str r1, [r0]
    @ io mux
    ldr r0, =0x020e0068
    ldr r1, =0x5
    str r1, [r0]
    @ io chariacter
    ldr r0, =0x020e02f4
    @ 0000 0000 0000 0000 0110 0000 0001 0000
    ldr r1, =0x0000a010
    str r1, [r0]
    @ GPIODIR
    ldr r0, =0X0209C004
    ldr r1, =0x8
    str r1, [r0]

    @ GPIODR
    ldr r0, =0x0209C000
    ldr r1, =0x0
    str r1, [r0]
    

loop:
    b loop