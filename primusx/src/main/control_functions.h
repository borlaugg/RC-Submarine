/*
 * control_functions.h
 *
 *  Created on: 24-May-2022
 *      Author: lyric
 */
#ifndef SRC_MAIN_CONTROL_FUNCTIONS_H_
#define SRC_MAIN_CONTROL_FUNCTIONS_H_
#include "PINS.h"
void surgeFwd(){
	Motor.set(SURGE_YAW_1_OUT, 2000);
	Motor.set(SURGE_YAW_2_OUT, 2000);
	/*
	PWM.write(SURGE_YAW_1_OUT, 2000);
	PWM.write(SURGE_YAW_2_OUT, 2000);
	PWM.write(SURGE_YAW_3_OUT, 2000);
	PWM.write(SURGE_YAW_4_OUT, 2000);
	*/

}
void surgeBwd(){
	Motor.set(SURGE_YAW_1_OUT, 1000);
	Motor.set(SURGE_YAW_2_OUT, 1000);
	/*
	PWM.write(SURGE_YAW_1_OUT, 1000);
	PWM.write(SURGE_YAW_2_OUT, 1000);
	PWM.write(SURGE_YAW_3_OUT, 1000);
	PWM.write(SURGE_YAW_4_OUT, 1000);
	*/
}
void heaveUp(){
	Motor.set(HEAVE_1_OUT, 2000);
	Motor.set(HEAVE_2_OUT, 2000);
	/*
	PWM.write(HEAVE_1_OUT, 2000);
	PWM.write(HEAVE_2_OUT, 2000);
	*/
}
void heaveDown(){
	Motor.set(HEAVE_1_OUT, 1000);
	Motor.set(HEAVE_2_OUT, 1000);
	/*
	PWM.write(HEAVE_1_OUT, 1000);
	PWM.write(HEAVE_2_OUT, 1000);
	*/
}
void yawClk(){
	Motor.set(SURGE_YAW_1_OUT, 2000);
	Motor.set(SURGE_YAW_2_OUT, 1000);
	/*
	PWM.write(SURGE_YAW_1_OUT, 1000);
	PWM.write(SURGE_YAW_2_OUT, 1000);
	PWM.write(SURGE_YAW_3_OUT, 2000);
	PWM.write(SURGE_YAW_4_OUT, 2000);
	*/
}
void yawAntClk(){
	Motor.set(SURGE_YAW_1_OUT, 1000);
	Motor.set(SURGE_YAW_2_OUT, 2000);
	/*
	PWM.write(SURGE_YAW_1_OUT, 2000);
	PWM.write(SURGE_YAW_2_OUT, 2000);
	PWM.write(SURGE_YAW_3_OUT, 1000);
	PWM.write(SURGE_YAW_4_OUT, 1000);
	*/
}

void steady(){
	Motor.set(SURGE_YAW_1_OUT, 1500);
	Motor.set(SURGE_YAW_2_OUT, 1500);
	Motor.set(HEAVE_1_OUT, 1500);
	Motor.set(HEAVE_2_OUT, 1500);
	/*
	PWM.write(SURGE_YAW_1_OUT, 1500);
	PWM.write(SURGE_YAW_2_OUT, 1500);
	PWM.write(SURGE_YAW_3_OUT, 1500);
	PWM.write(SURGE_YAW_4_OUT, 1500);
	PWM.write(HEAVE_1_OUT, 1500);
	PWM.write(HEAVE_2_OUT, 1500);
	*/
}



#endif /* SRC_MAIN_CONTROL_FUNCTIONS_H_ */
