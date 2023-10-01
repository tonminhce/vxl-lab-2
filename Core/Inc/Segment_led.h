/*
 * Segment_led.h
 *
 *  Created on: Oct 26, 2022
 *      Author: phamk
 */

#include <stdlib.h>
#include <stdint.h>
#include "stm32f1xx_hal.h"

#ifndef INC_SEGMENT_LED_H_
#define INC_SEGMENT_LED_H_

void turnOnB(int *arr, int n);
void turnOffB(int *arr, int n);
//int update7SEG(int index);
void segmentLed(int n, int select);

#endif /* INC_SEGMENT_LED_H_ */
