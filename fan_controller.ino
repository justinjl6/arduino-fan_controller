/*******************************************************************************
 * 
 * Arduino Fan Controller Sketch
 * - Justin Lambe, May 2015
 *
*******************************************************************************/


/******************************************************************************/
// PIN Assignments

// button 1 is led, with normally open & closed pins
int btn1_nc = 9;
int btn1_no = 10;
int btn1_led = 11;

// button 2 is led, with normally open & closed pins
int btn2_nc = 6;
int btn2_no = 7;
int btn2_led = 8;

// button 3 is dumb on/off
int btn3_led = 12;

// debug led
int debug_led = 13;


/******************************************************************************/
// Include things

#include <Wire.h>
#include <Adafruit_MCP23017.h>
#include <Adafruit_RGBLCDShield.h>


/******************************************************************************/
// Setup function

void setup() {
  Serial.begin( 9600 );
}


/******************************************************************************/
// Main loop


void loop() {
  
  Serial.write( "testing\n" );
  
  delay( 1000 ); 
  
}



/******************************************************************************/
// FIN
/******************************************************************************/

