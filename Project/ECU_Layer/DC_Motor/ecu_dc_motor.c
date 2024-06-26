
#include "ecu_dc_motor.h"

Std_ReturnType dc_motor_initialize(const dc_motor_t * motor){
    Std_ReturnType ret = E_OK;
    
    if(NULL ==  motor){
         ret = E_NOT_OK;
    }
    else{
        gpio_pin_direction_initialize_write(&(motor->dc_motor_pin[0]));
        gpio_pin_direction_initialize_write(&(motor->dc_motor_pin[1]));
    }
    return ret;
}


Std_ReturnType dc_motor_move_left(const dc_motor_t * motor){
    Std_ReturnType ret = E_OK;
    
    if(NULL ==  motor){
         ret = E_NOT_OK;
    }
    else{
        gpio_pin_write_logic(&(motor->dc_motor_pin[0]) , HIGH);
        gpio_pin_write_logic(&(motor->dc_motor_pin[1]) , LOW);

    }
    return ret;
}


Std_ReturnType dc_motor_move_right(const dc_motor_t * motor){
    Std_ReturnType ret = E_OK;
    
    if(NULL ==  motor){
         ret = E_NOT_OK;
    }
    else{
        gpio_pin_write_logic(&(motor->dc_motor_pin[0]) , LOW);
        gpio_pin_write_logic(&(motor->dc_motor_pin[1]) , HIGH);
    }
    return ret;
}


Std_ReturnType dc_motor_stop(const dc_motor_t * motor){
    Std_ReturnType ret = E_OK;
    
    if(NULL ==  motor){
         ret = E_NOT_OK;
    }
    else{
        gpio_pin_write_logic(&(motor->dc_motor_pin[0]) , LOW);
        gpio_pin_write_logic(&(motor->dc_motor_pin[1]) , LOW);
    }
    return ret;
}

