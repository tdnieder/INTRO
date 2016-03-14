/*
 * Timer.c
 *
 *  Created on: 14.03.2016
 *      Author: fa
 */

#include "Platform.h"
#include "LED1.h"
#include "Timer.h"

int count = 0;

void TMR_OnInterrupt(void){
//do something, you got a timer interrupt
	if(count%100 == 0)
		LED1_Neg();
	count++;

}


void TMR_Init(void){
	//int count = 0; so sollte es sein funktioniert aber noch nicht
}
