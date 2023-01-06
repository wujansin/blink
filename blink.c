//********************************
// wiringPi Lib Function Test
//********************************
#include <stdio.h>
#include <wiringPi.h>
#define LED_RED	5
#define LED_YEL	6
#define BTN		4

int main (void)
{
	int btn_val;
	/* Set up GPIO */
	wiringPiSetup() ;
	pinMode(BTN, INPUT);
	pinMode(LED_RED, OUTPUT);
	pinMode(LED_YEL, OUTPUT);	
	
	
	/* Main Loop */
	for (;;)
	{
		btn_val = digitalRead(BTN);
		if(btn_val == HIGH){
			digitalWrite (LED_RED, HIGH) ;
			digitalWrite (LED_YEL, HIGH) ;
			//delay (500);
		}	
		else{
			digitalWrite (LED_RED,  LOW) ; 
			digitalWrite (LED_YEL,  LOW) ; 
			//delay (500);
		}	
	}
	return 0 ;
}
