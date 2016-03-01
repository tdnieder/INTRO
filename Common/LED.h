/*
 * LED.h
 *
 *  Created on: 29.02.2016
 *      Author: Erich Styger
 */

#ifndef __LED_H_
#define __LED_H_

#include "Platform.h"

#if PL_CONFIG_NOF_LED>=1
  #include "LED1.h"
#endif
#if PL_CONFIG_NOF_LED>=2
  #include "LED2.h"
#endif
#if PL_CONFIG_NOF_LED>=3
//  #include "LED3.h"
#endif

void LED_Init(void);
void LED_Deinit(void);

#endif /* __LED_H_ */
