#include <xc.h>
#define _XTAL_FREQ 4000000
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bit (Code protection off)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)

int get_data_from_keypad(void);
void main(){ int data;
    TRISB = 0xF0;
    PORTB = 0x00;
    TRISC = 0x00;
    while(1){
        data = get_data_from_keypad();
        PORTC = data;
    }
    
}

int get_data_from_keypad(void){
    

    //PORTB = 0xFF;
    while(1){
        RB0 = 1;
        if(RB4){
            while(RB4);
            return 1;
        }
        if(RB5){
            while(RB5);
            return 2;
        }
        if(RB6){
            while(RB6);
            return 3;
        }
        if(RB7){
            while(RB7);
            return 4;
        }
        RB0 = 0;


        
        RB1 = 1;
        if(RB4){
            while(RB4);
            return 5;
        }
        if(RB5){
            while(RB5);
            return 6;
        }
        if(RB6){
            while(RB6);
            return 7;
        }
        if(RB7){
            while(RB7);
            return 8;
        }
        RB1 = 0;
        
        
        

        RB2 = 1;
        if(RB4){
            while(RB4);
            return 8;
        }
        if(RB5){
            while(RB5);
            return 9;
        }
        if(RB6){
            while(RB6);
            return 10;
        }
        if(RB7){
            while(RB7);
            return 11;
        }
        RB2 = 0;



        RB3 = 1;
        if(RB4){
            while(RB4);
            return 12;
        }
        if(RB5){
            while(RB5);
            return 13;
        }
        if(RB6){
            while(RB6);
            return 14;
        }
        if(RB7){
            while(RB7);
            return 15;
        }
        RB3 = 0;        
    }
    
}