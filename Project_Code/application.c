/* 
 * File:   application.c
 * Author: AyaAli
 * Created on September 22, 2023, 10:24 AM
 */
#include "application.h"


volatile uint_32 timer2_flag = 0;


void Timer2_Defualt_Interrupt_Hundeller(void);


led_t led1={
.Port_Name = PORTC_INDEX,
.pin = PIN0,
.led_statues = LED_OFF
};

timer2_config_t timer2_obj = {
.TMR2_Interrupt_Hundeler = Timer2_Defualt_Interrupt_Hundeller,
.Timer_priority = Interrupt_Periority_LOW,
.timer2_prescaller_value = TIMER2_PRESCALLER_DIV_BY_1 ,
.timer2_post_scaller_value = TIMER2_POSTSCALLER_DIV_BY_16  ,
.timer2_preloaded_value = 249
};


int main() {
   
Std_ReturnType ret = E_NOT_OK;
//application_initialize();
ret = Timer2_Init(&timer2_obj);
//ret = led_initialize(&led1);
while(1){

}
 return (EXIT_SUCCESS);
}
void application_initialize(void){
   Std_ReturnType ret = E_NOT_OK;

}
void Timer2_Defualt_Interrupt_Hundeller(void){
++timer2_flag;
//led_toggle(&led1);
}
