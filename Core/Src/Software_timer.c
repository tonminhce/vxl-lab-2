/*
 * Software_timer.c
 *
 *  Created on: Oct 30, 2022
 *      Author: phamk
 */

#include "Software_timer.h"

int timer_counter_0 = 0;
int timer_counter_1 = 0;
int timer_counter_2 = 0;

int timer_flag_0 = 0;
int timer_flag_1 = 0;
int timer_flag_2 = 0;

int TIMER_CYCLE = 10;

void setTimer(int duration, int flag){
	if (flag == 0){
		timer_counter_0 = duration / TIMER_CYCLE;
		timer_flag_0 = 0;
	}
	else if (flag == 1){
		timer_counter_1 = duration / TIMER_CYCLE;
		timer_flag_1 = 0;
	}
	else if (flag == 2){
			timer_counter_2 = duration / TIMER_CYCLE;
			timer_flag_2 = 0;
		}
}

void timerRun(int flag){
	if(timer_counter_0 > 0 && flag == 0){
		timer_counter_0--;

		if (timer_counter_0 == 0)
			timer_flag_0 = 1;
	}

	if(timer_counter_1 > 0 && flag == 1){
		timer_counter_1--;

		if (timer_counter_1 == 0)
			timer_flag_1 = 1;
	}

	if(timer_counter_2 > 0 && flag == 1){
		timer_counter_2--;

		if (timer_counter_2 == 0)
			timer_flag_2 = 1;
	}
}
