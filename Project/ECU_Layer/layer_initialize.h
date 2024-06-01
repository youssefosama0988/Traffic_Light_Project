/* 
 * File:   layer_initialize.h
 * Author: Admin
 *
 * Created on March 2, 2024, 1:47 AM
 */

#ifndef LAYER_INITIALIZE_H
#define	LAYER_INITIALIZE_H

#include "LED/ecu_led.h" 
#include "button/ecu_button.h"
#include "RELAY/ecu_relay.h"
#include "DC_Motor/ecu_dc_motor.h"
#include "keypad/ecu_keypad.h"
#include "LCD/lcd.h"
void application_initialize(void);
extern Std_ReturnType ret;
extern lcd_8bits_t lcd2;
extern lcd_4bits_t lcd1;
extern led_t red;
extern led_t green;
extern led_t yellow;
#endif	/* LAYER_INITIALIZE_H */

