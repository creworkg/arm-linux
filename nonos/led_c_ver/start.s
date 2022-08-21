
.global _start

_start:
    /* set cpu at priviledged mode */
    mrs r0, cpsr 
    bic r0, r0, #0x1f /* clear least 5 bits */
    orr r0, r0, #0x13 /* set least 5 bits 0x13 */
    msr cpsr, r0

    /* set sp */
    ldr sp, =0x80200000
    b main
