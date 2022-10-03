#include <stdio.h>
#include <inttypes.h>
#include "kernel_defines.h"
#include "mtd.h"
#include "mtd_flashpage.h"
#include "main.h"

static int log_if(void);

static mtd_flashpage_t flash_dev = MTD_FLASHPAGE_INIT_VAL(4);
static mtd_dev_t *dev = &flash_dev.base;

/**
 * @brief Storage Table
 *
 * ### FLASHPAGE Attrs.
 * 
 * | MCU            | NUMOF | SIZE  | PAGES_PER_ROW |
 * |:---------------|------:|------:|--------------:|
 * | native         |   32  |   512 | N             |
 * | samd21 (based) | 1024  |   256 | 4             |
 * | cc2538 (based) |  255  |  2048 | N             |
 */

int main(void) {

    printf("FLASHPAGE_NUMOF: %d\n", FLASHPAGE_NUMOF);
    printf("FLASHPAGE_SIZE: %d\n", FLASHPAGE_SIZE);

    #ifdef CPU_CORE_CORTEX_M0PLUS
        printf("FLASHPAGE_PAGES_PER_ROW: %d\n", FLASHPAGE_PAGES_PER_ROW);
    #endif

    return 0;
}

/*
int log_if(void){
    printf("\n");
    //
    printf("Number of elements: %d\n", IF_NUMOF);
    printf("Address: 0x%" PRIx32 "\n", (uint32_t)&if_config);
    printf("\n");

    for (size_t i = 0; i < IF_NUMOF; i++) {
        printf("==============================\n\n");
        printf("Element: %d\n", i);
        printf("Address: 0x%" PRIx32 " \n", (uint32_t)&if_config[i]);
        printf("\n");

        uint8_t *ptr;

        for (uint32_t addr = (uint32_t)&if_config[i]; addr < (uint32_t)&if_config[i + 1]; addr++) {
            ptr = (uint8_t *)addr;
            printf("[0x%lx]: %02x\n", addr, *ptr);
        }
        printf("\n");

    }
    return 0;
}
*/