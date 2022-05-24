// Do not remove the include below
#include "PlutoPilot.h"
#include "Motor.h"
#include "Peripheral.h"
#include "Utils.h"
#include "PINS.h"
#include "control_functions.h"
volatile uint32_t system_time=0;
//The setup function is called once at PlutoX's hardware startup
void plutoInit()
{
	// hardware initialization code here
	GPIO.init(SURGE_FWD_IN, INPUT);
	GPIO.init(SURGE_BWD_IN, INPUT);
	GPIO.init(HEAVE_UP_IN, INPUT);
	GPIO.init(HEAVE_DOWN_IN, INPUT);
	GPIO.init(YAW_CLK_IN, INPUT);
	GPIO.init(YAW_ANTCLK_IN, INPUT);
	Motor.init(SURGE_YAW_1_OUT);
	Motor.init(SURGE_YAW_2_OUT);
	Motor.init(HEAVE_1_OUT);
	Motor.init(HEAVE_2_OUT);

	/*
	 PWM.init(SURGE_YAW_1_OUT, 490);
	 PWM.init(SURGE_YAW_2_OUT, 490);
	 PWM.init(SURGE_YAW_3_OUT, 490);
	 PWM.init(SURGE_YAW_4_OUT, 490);
	 PWM.init(HEAVE_1_OUT, 490);
	 PWM.init(HEAVE_2_OUT, 490);
	 */
}




//The function is called once before plutoLoop() when you activate developer mode
void onLoopStart()
{
//Do your one time stuff here

}



//The loop function is called in an endless loop
void plutoLoop()
{

//Add your repeated code here
if((millis()-system_time)>BUFFER){
		if (GPIO.read(SURGE_FWD_IN)==1){
			surgeFwd();
		}
		else if(GPIO.read(SURGE_BWD_IN)==1){
			surgeBwd();
		}
		else if(GPIO.read(HEAVE_UP_IN)==1){
			heaveUp();
		}
		else if(GPIO.read(HEAVE_DOWN_IN)==1){
			heaveDown();
		}
		else if(GPIO.read(YAW_CLK_IN)==1){
			yawClk();
		}
		else if(GPIO.read(YAW_ANTCLK_IN)==1){
			yawAntClk();
		}
		else{
			steady();
		}
}
system_time=millis();
}



//The function is called once after plutoLoop() when you deactivate developer mode
void onLoopFinish()
{
//Do your cleanup stuff here


}




