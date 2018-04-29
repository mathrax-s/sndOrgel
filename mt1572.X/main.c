/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC12F1572
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    // mtouch_sensor_sample_t data;
    mtouch_button_deviation_t data;
    mtouch_button_threshold_t   threshold;
    threshold = MTOUCH_Button_Threshold_Get(Sensor_AN2);
    uint8_t status=0;
    uint8_t i;
    uint16_t sum;
    while (1)
    {
        
        MTOUCH_Service_Mainloop(); 
        data = MTOUCH_Button_Deviation_Get(Sensor_AN2);
        
        // uint8_t a;
        // a = data / 10000;
        // EUSART_Write(a+'0');
        // data -= 10000*a;
        
        // uint8_t b;
        // b = data /1000;
        // EUSART_Write(b+'0');
        // data -= 1000*b;
        
        // uint8_t c;
        // c = data / 100;
        // EUSART_Write(c+'0');
        // data -= 100*c;
        
        // uint8_t d;
        // d = data / 10;
        // EUSART_Write(d+'0');
        // data -= 10*d;
        
        // uint8_t e;
        // e = data;
        // EUSART_Write(e+'0');
        
        // EUSART_Write(',');
        // EUSART_Write(13);
        // EUSART_Write(10);
        
        if(MTOUCH_Button_isPressed(Sensor_AN2)){
            if(status==0){
                status=1;
                if(data>threshold){
                    EUSART_Write('a'+ (data - threshold));
                    // __delay_ms(10);
                }
                
            }
            
        }else{
            status=0;
        }
        
    }
}
/**
 End of File
*/