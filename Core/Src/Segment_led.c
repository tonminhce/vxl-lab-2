/*
 * Segment_led.c
 *
 *  Created on: Oct 26, 2022
 *      Author: phamk
 */

#include "Segment_led.h"

uint16_t SWITCH_PIN[6] = {GPIO_PIN_10, GPIO_PIN_11, GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_14, GPIO_PIN_15};
uint16_t pinArr[7] = {GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6};

void turnOnB(int *arr, int n){
  char state = 0;
  for (int i = 0; i < n; i++){
	  switch(arr[i]){
		  case 0:
			  HAL_GPIO_WritePin(GPIOB, pinArr[0], state);
			  break;
		  case 1:
			  HAL_GPIO_WritePin(GPIOB, pinArr[1], state);
			  break;
		  case 2:
			  HAL_GPIO_WritePin(GPIOB, pinArr[2], state);
			  break;
		  case 3:
			  HAL_GPIO_WritePin(GPIOB, pinArr[3], state);
			  break;
		  case 4:
			  HAL_GPIO_WritePin(GPIOB, pinArr[4], state);
			  break;
		  case 5:
			  HAL_GPIO_WritePin(GPIOB, pinArr[5], state);
			  break;
		  case 6:
			  HAL_GPIO_WritePin(GPIOB, pinArr[6], state);
			  break;

		  default:
			  break;
	  }
  }
}

void turnOffB(int *arr, int n){
  char state = 1;
  for (int i = 0; i < n; i++){
	  switch(arr[i]){
		  case 0:
			  HAL_GPIO_WritePin(GPIOB, pinArr[0], state);
			  break;
		  case 1:
			  HAL_GPIO_WritePin(GPIOB, pinArr[1], state);
			  break;
		  case 2:
			  HAL_GPIO_WritePin(GPIOB, pinArr[2], state);
			  break;
		  case 3:
			  HAL_GPIO_WritePin(GPIOB, pinArr[3], state);
			  break;
		  case 4:
			  HAL_GPIO_WritePin(GPIOB, pinArr[4], state);
			  break;
		  case 5:
			  HAL_GPIO_WritePin(GPIOB, pinArr[5], state);
			  break;
		  case 6:
			  HAL_GPIO_WritePin(GPIOB, pinArr[6], state);
			  break;

		  default:
			  break;
	  }
  }
}

void segmentLed(int n, int select){
  int *arrOn;
  int *arrOff;
  int len = 0;
  int lenOff = 0;

  for (int i = 0; i < 6; i++){
	  if (i != select)
		  HAL_GPIO_WritePin(GPIOA, SWITCH_PIN[i], 1);
  }

  HAL_GPIO_WritePin(GPIOA, SWITCH_PIN[select], 0);

  if(n==0){
	len = 6;
	int tempOn[7] = {1,2,3,4,5,6};
	int tempOff[7] = {0};
	lenOff = 1;
	arrOff = tempOff;
	arrOn = tempOn;
  }

  else if(n==1){
	len = 2;
	int tempOn[7] = {5,4};
	int tempOff[7] = {1,2,3,6,0};
	lenOff = 5;
	arrOff = tempOff;
	arrOn = tempOn;
  }

  else if(n==2){
	int tempOn[7] = {6,5,0,2,3};
	int tempOff[7] = {1,4};
	lenOff = 2;
	arrOff = tempOff;
	len = 5;
	arrOn = tempOn;
  }

  else if(n==3){
	int tempOn[7] = {6,5,0,4,3};
	int tempOff[7] = {1,2};
	lenOff = 2;
	arrOff = tempOff;
	len = 5;
	arrOn = tempOn;
  }

  else if(n==4){
	int tempOn[7] = {1,0,5,4};
	int tempOff[7] = {2,3,6};
	lenOff = 3;
	arrOff = tempOff;
	len = 4;
	arrOn = tempOn;
  }

  else if(n==5){
	int tempOn[7] = {6,1,0,4,3};
	int tempOff[7] = {2,5};
	lenOff = 2;
	arrOff = tempOff;
	len = 5;
	arrOn = tempOn;
  }

  else if(n==6){
	int tempOn[7] = {6,1,0,4,3,2};
	int tempOff[7] = {5};
	lenOff = 1;
	arrOff = tempOff;
	len = 6;
	arrOn = tempOn;
  }

  else if(n==7){
	int tempOn[7] = {4,5,6};
	int tempOff[7] = {0,1,2,3};
	lenOff = 4;
	arrOff = tempOff;
	len = 3;
	arrOn = tempOn;
  }

  else if(n==8){
	int tempOn[7] = {0,1,2,3,4,5,6};
	int tempOff[7] = {};
	lenOff = 0;
	arrOff = tempOff;
	len = 7;
	arrOn = tempOn;
  }

  else if(n==9){
	int tempOn[7] = {0,1,6,5,4,3};
	int tempOff[7] = {2};
	lenOff = 1;
	arrOff = tempOff;
	len = 6;
	arrOn = tempOn;
  }


  turnOnB(arrOn, len);
  turnOffB(arrOff, lenOff);

  arrOn = 0;
  arrOff = 0;
}



