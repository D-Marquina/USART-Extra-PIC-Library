/*  
 * USART Extra Library for PIC18
 * File:   UsartMod.h
 * Author: Daniel Marquina
 *
 * This library contains additional functions to be used with USART from 
 * Microchips' PLIBS.
 *
 * Created on 22/10/2017
 * 
 * Copyright (c) 2017 Daniel Marquina 
 * 
 */
#ifndef USARTEXT_H
#define USARTEXT_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifndef __XC8
    #error Use XC8 for compiling
#endif

#include <xc.h>
#include "usart.h"

void sendStrUSART( char *data, int length);


#ifdef	__cplusplus
}
#endif

#endif	/* USARTEXT_H */
