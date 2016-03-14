/*
 * Timer.h
 *
 *  Created on: 14.03.2016
 *      Author: fa
 */

#ifndef TMR_TICKS_MS
#define TMR_TICKS_MS 10

#include "Platform.h"

#if PL_CONFIG_HAS_TIMER
#include "TU1.h"
#endif

/*a brief function that is called from timer interrupt ever TMR_TICKS_MS.*/
void TMR_OnInterrupt(void);

/*a brief Timer Driver Initialization*/
void TMR_Init(void);

#endif /* TMR_TICKS_MS */
