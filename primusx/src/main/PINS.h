/*
 * PINS.h
 *
 *  Created on: 24-May-2022
 *      Author: lyric
 */

#ifndef PINS_H_
#define PINS_H_

//input GPIO pins
#define SURGE_FWD_IN Pin2
#define SURGE_BWD_IN Pin3
#define HEAVE_UP_IN Pin6
#define HEAVE_DOWN_IN Pin7
#define YAW_CLK_IN Pin8
#define YAW_ANTCLK_IN Pin9

//output motor pins (using only 4 motors because only 4 H-bridge driver are there in primusx)
#define SURGE_YAW_1_OUT M1
#define SURGE_YAW_2_OUT M2
#define HEAVE_1_OUT M3
#define HEAVE_2_OUT M4
/*
//PWM pins
#define SURGE_YAW_1_OUT Pin4
#define SURGE_YAW_2_OUT Pin5
#define SURGE_YAW_1_OUT Pin10
#define SURGE_YAW_2_OUT Pin13
#define HEAVE_1_OUT Pin15
#define HEAVE_2_OUT Pin18
*/
//some constants
#define BUFFER 1500

#endif /* PINS_H_ */
