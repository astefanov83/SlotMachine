/* 
Premise:
3x3 matrix of RGB LEDs, where every row is the same color.
Using capacitors, every position has a different combination of capacitance.
The goal is to stop the circuit whenever three in a row, column, or diagonal are lit
*/
#include "Arduino.h"

void setup() {
// put your setup code here, to run once:
    pinMode(11, OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
    digitalWrite(11, HIGH);           // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(11, LOW);            // turn the LED off by making the voltage LOW
    delay(1000);                      // wait for a second

}