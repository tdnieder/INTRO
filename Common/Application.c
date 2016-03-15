/*
 * Application.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */

#include "Platform.h"
#include "Application.h"
#include "Event.h"
#include "LED.h"
#include "WAIT1.h"
#include "CS1.h"
#include "Keys.h"

#if PL_CONFIG_HAS_EVENTS
static void APP_EventHandler(EVNT_Handle event) {
  switch(event) {
  case EVNT_STARTUP:
    LED1_On(); /* just do something */
    break;
  case EVNT_LED_HEARTBEAT:
    LED1_Neg();
    break;
#if PL_CONFIG_HAS_KEYS
  #if PL_CONFIG_NOF_KEYS>=1
  case EVNT_SW1_PRESSED:
    LED2_Neg();
    break;
  #endif
  #if PL_CONFIG_NOF_KEYS>=2
  case EVNT_SW2_PRESSED:
    LED2_Neg();
    break;
  #endif
  #if PL_CONFIG_NOF_KEYS>=3
  case EVNT_SW3_PRESSED:
    LED2_Neg();
    break;
  #endif
  #if PL_CONFIG_NOF_KEYS>=4
  case EVNT_SW4_PRESSED:
    LED2_Neg();
    break;
  #endif
  #if PL_CONFIG_NOF_KEYS>=5
  case EVNT_SW5_PRESSED:
    LED2_Neg();
    break;
  #endif
  #if PL_CONFIG_NOF_KEYS>=6
  case EVNT_SW6_PRESSED:
    LED2_Neg();
    break;
  #endif
  #if PL_CONFIG_NOF_KEYS>=7
  case EVNT_SW7_PRESSED:
    LED2_Neg();
    break;
  #endif
#endif
  } /* switch */
}
#endif /* PL_CONFIG_HAS_EVENTS */

void APP_Start(void) {
  PL_Init();
#if PL_CONFIG_HAS_EVENTS
  EVNT_SetEvent(EVNT_STARTUP);
#endif
  for(;;) {
#if PL_CONFIG_HAS_KEYS
    KEY_Scan();
#endif
#if PL_CONFIG_HAS_EVENTS
    EVNT_HandleEvent(APP_EventHandler, TRUE);
#endif
    WAIT1_Waitms(50); /* just wait for some arbitrary time .... */
  }
}
