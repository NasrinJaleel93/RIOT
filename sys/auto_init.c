#include <stdint.h>
#include <stdio.h>
#include <auto_init.h>

#define ENABLE_DEBUG
#include <debug.h>

extern void main(void);

void auto_init(void) {
#ifdef MODULE_HWTIMER
    DEBUG("Auto init hwtimer module.\n");
    hwtimer_init();
#endif
#ifdef MODULE_SWTIMER
    DEBUG("Auto init swtimer module.\n");
    swtimer_init();
#endif
#ifdef MODULE_SHT11
    DEBUG("Auto init SHT11 module.\n");
    sht11_init();
#endif
#ifdef MODULE_GPIOINT
    DEBUG("Auto init gpioint module.\n");
    gpioint_init();
#endif
#ifdef MODULE_CC110X
    DEBUG("Auto init CC1100 module.\n");
    cc1100_init();
#endif
#ifdef MODULE_LTC4150
    DEBUG("Auto init ltc4150 module.\n");
    ltc4150_init();
#endif
    main();
}