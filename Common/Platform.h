/*
 * Platform.h
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */

#ifndef SOURCES_INTRO_COMMON_PLATFORM_H_
#define SOURCES_INTRO_COMMON_PLATFORM_H_

#include <stdint.h> /* types as uint8_t used in project */

void PL_Init(void);
void PL_Deinit(void);

#define PL_CONFIG_HAS_LED    (0)
#define PL_CONFIG_NOF_LED    (3)

#endif /* SOURCES_INTRO_COMMON_PLATFORM_H_ */
