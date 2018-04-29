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
        Device            :  PIC16F1705
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
#include "main.h"

/*
                         Main application
 */
unsigned char scale[] = {
    //re  mi   so  la  ti
    //    NOTE_G2, NOTE_A2, NOTE_B2,
    //    NOTE_D3, NOTE_E3, NOTE_G3, NOTE_A3, NOTE_B3,
    //    NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_B4,
    //NOTE_D5, //NOTE_E5, NOTE_G5, NOTE_A5, //NOTE_B5,
    // NOTE_D6, NOTE_E6, NOTE_G6, 

    //    NOTE_D1, NOTE_E1, NOTE_G1, NOTE_A1, 
    //NOTE_B1,
    NOTE_D2, NOTE_E2, NOTE_G2, NOTE_A2, NOTE_B2,
    NOTE_D3, NOTE_E3, NOTE_G3, NOTE_A3, NOTE_B3,
    NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_B4,
    NOTE_D5, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_B5,
    NOTE_D6, NOTE_E6//, //NOTE_G6, NOTE_A6, NOTE_B6,
    //    NOTE_D7, NOTE_E7, NOTE_G7, NOTE_A7//, NOTE_B7,

    // NOTE_F6, NOTE_G6, NOTE_A6, NOTE_AS6, NOTE_C7, NOTE_D7, NOTE_E7, NOTE_F7, NOTE_G7, NOTE_A7

    // NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_GS5, NOTE_B5,
    // NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_GS6, NOTE_B6,

    //     NOTE_D1, NOTE_E1, NOTE_F1, NOTE_G1, NOTE_GS1, NOTE_AS1,
    //     NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_GS2, NOTE_AS2,
    //     NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_GS3, NOTE_AS3,
    //     NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_GS4, NOTE_AS4,
    //     NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_GS5, NOTE_AS5,
    //     NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_GS6,
    //     NOTE_C7, NOTE_D7, NOTE_E7, NOTE_F7, NOTE_G7, NOTE_GS7,


};

void soundPlay(char c, char onkai) {
    if (c == 0) {
        dat_d0 = onkai_d[onkai];
        dat_f0 = onkai_f[onkai];
        env0 = 0;
        envelopeCount0 = 0;
    } else {
        dat_d1 = onkai_d[onkai];
        dat_f1 = onkai_f[onkai];
        env1 = 0;
        envelopeCount1 = 0;
    }
}

void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();


    ENV_DELAY = 150;

    uint8_t s = 12;
    uint8_t rcvData;
    uint8_t count=0;

    while (1) {

        rcvData = EUSART_Read();

        if (rcvData >= 'a' && rcvData <= 'z') {
            count++;
            s = rcvData-'a';
            
            if (s >= 22)s = 22;
            soundPlay(count % 2, scale[s]);
        }

//                s++;
//                if (s >= 66)s = 13; // sizeof (scale))s = 0;        
//                soundPlay(s % 2, s);
//                
//                __delay_ms(250);

    }
}
/**
 End of File
 */