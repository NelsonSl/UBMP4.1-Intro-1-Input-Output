#include    "xc.h"              // Microchip XC8 compiler include file
#include    "stdint.h"          // Include integer definitions
#include    "stdbool.h"         // Include Boolean (true/false) definitions
 
#include    "UBMP410.h"         // Include UBMP4.1 constant and function definitions
 
// TODO Set linker ROM ranges to 'default,-0-7FF' under "Memory model" pull-down.
// TODO Set linker code offset to '800' under "Additional options" pull-down.
 
// Program constant definitions
const unsigned char maxCount = 50;
 
// Program variable definitions
unsigned char SW3Count = 0;
bool SW3Pressed = false;
 
void playNote(int period, int durationCycles) {
   for(int i = 0; i<durationCycles; i++) {
       BEEPER = !BEEPER;
       __delay_us(period);
   }
}
 
void playENote (){
   playNote(E, 1000);
}
 
const int C = 3822;
const int D = 3412;
const int E = 3033;
const int G = 2551;
int main(void)
{
   // Configure oscillator and I/O ports. These functions run once at start-up.
   OSC_config();               // Configure internal oscillator for 48 MHz
   UBMP4_config();             // Configure on-board UBMP4 I/O devices
    
   // Code in this while loop runs repeatedly.
   while(1)
       {
 
    if(SW5 == 0 && SW4==1 && SW3==1) //c
       {
           playNote(E, 1000);
           playNote(D, 1000);
           playNote(C, 1000);
           playNote(E, 1000);
           playNote(C, 1000);
           playNote(C, 1000);
           playNote(C, 1000);
           playNote(D, 1000);
           playNote(D, 1000);
           playNote(D, 1000);
           playNote(E, 1000);
           playNote(G, 1000);
           playNote(G, 1000);
           playNote(E, 1000);
           playNote(D, 1000);
           playNote(C, 1000);
           playNote(D, 1000);
          for (int i = 0; i < 3; i++) playENote();
 
       }
 
 
 
if(SW1 == 0)
   {
           RESET();
   }
       }
}
