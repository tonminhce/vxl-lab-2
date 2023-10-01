/*
 * Software_timer.c
 *
 *  Created on: Oct 30, 2022
 *      Author: phamk
 */

#include "Software_timer.h"

int timer_counter_0 = 0;
int timer_flag_0 = 0;
int TIMER_CYCLE = 10;

void setTimer(int duration){
	timer_counter_0 = duration / TIMER_CYCLE;
	timer_flag_0 = 0;
}

void timerRun(){
	if(timer_counter_0 > 0){
		timer_counter_0--;

		if (timer_counter_0 == 0)
			timer_flag_0 = 1;
	}
}
