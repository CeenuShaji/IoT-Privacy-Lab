/**
 * File Name:   led.h
 * Description: Header file for the led driver.
 */

// Header Guard
#ifndef _LED_H_
#define _LED_H_

/***************************************************************************************************/
/* Include Files */
/***************************************************************************************************/
#include "labs_platform.h"
/***************************************************************************************************/
/* Public Datatypes */
/***************************************************************************************************/
typedef enum {
    LED1,
    LED2,
    LED3,
    LED4,
    LED5,
    LED6,
    LED7,
    LED8
} led_t;

/***************************************************************************************************/
/* Public Constants */
/***************************************************************************************************/

/***************************************************************************************************/
/* Public Variables(extern) */
/***************************************************************************************************/

/***************************************************************************************************/
/* Public Function Prototypes */
/***************************************************************************************************/

void led_init();
void led_display_num(uint8_t num);
void led_on(led_t led);
void led_off(led_t led);

#endif //End Header Guard