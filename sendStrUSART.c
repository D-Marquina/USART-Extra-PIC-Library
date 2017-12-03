/* 
 * File:   uputsMod.c
 * Author: Daniel Marquina
 *
 * This is a modified version of "uputs.c" that doesn't need a null character.
 * Created on 22/10/2017
 * Copyright (c) 2017 Daniel Marquina
 */

#include <p18cxxx.h>
#include "UsartMod.h"

/* Send a string through USART
 *  Sends an array of chars (string) of defined size.
 *  @param data: pointer to array where data is stored.
 *  @param length: arrays' number of bytes
 */

#if defined (AUSART_V1) || defined (EAUSART_V3) || defined (EAUSART_V4) || defined (EAUSART_V5)

void sendStrUSART( char* data, int length){
    for (int i = 0; i < length; i++){
        while(BusyUSART());
        putcUSART(data[i]);
    }
}

#endif

