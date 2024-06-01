/* 
 * File:   application.c
 * Author: Admin
 *
 * Created on February 4, 2024, 12:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

#include "application.h"
uint8 lcd_counter = 0;

int main() {
    application_initialize();
    uint8 program =0;
    while(1){
        
        if(0 == program){
            ret = lcd_4bit_send_command(&lcd1 , LCD_CLEAR);
            ret = led_turn_on(&green);
            ret = lcd_4bit_send_string_pos(&lcd1 ,1,3 ,"Green is ON ");
            __delay_ms(5000);
            ret = led_turn_off(&green);
            program++;
        }    
        
        else if(1 == program){
            ret = lcd_4bit_send_command(&lcd1 , LCD_CLEAR);
            ret = led_turn_on(&yellow);
            ret = lcd_4bit_send_string_pos(&lcd1 ,1,3 ,"YELLOW is ON ");
            __delay_ms(2000);
            ret = led_turn_off(&yellow);
            program++;
        }   
        else if(2 == program){
            ret = lcd_4bit_send_command(&lcd1 , LCD_CLEAR);
            ret = led_turn_on(&red);
            ret = lcd_4bit_send_string_pos(&lcd1 ,1,3 ,"RED is ON ");
            __delay_ms(4000);
            ret = led_turn_off(&red);
            program = 0;
        }    
    }
    return (EXIT_SUCCESS);
}


