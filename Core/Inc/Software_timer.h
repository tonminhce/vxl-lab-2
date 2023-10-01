/*
 * Software_timer.h
 *
 *  Created on: Oct 30, 2022
 *      Author: phamk
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_counter_0;
extern int timer_flag_0;
extern int TIMER_CYCLE;

void setTimer(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
