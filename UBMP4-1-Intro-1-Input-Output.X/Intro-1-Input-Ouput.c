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
 
//  void rest( __delay_us)
void playNote(int period, int durationCycles, bool isRest) {
  for(int i = 0; i<durationCycles; i++)
  {
      if (!isRest) BEEPER = !BEEPER;
      for(int j = 0; j < period; j++);
  }
}
 
const int C = 329;
const int D = 293;
const int E = 261;
const int G = 391;
const int q = 500;
 
int main(void)
{
 
  OSC_config();              
  UBMP4_config();            
  
  while(1)
      {
if(SW5 == 0 && SW4==1 && SW3==1)
      {
playNote(E, q, false);
playNote(E, q, true);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(C, q, true);
playNote(C, q, false);
         
playNote(D, q, true);
playNote(D, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(G, q, true);
playNote(G, q, false);
 
playNote(G, q, true);
playNote(G, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(C, q, true);
playNote(C, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(E, q, true);
playNote(E, q, false);
 
playNote(D, q, true);
playNote(D, q, false);
 
playNote(C, q, true);
playNote(C, q, false);
      }
 
      if(SW3 == 0)
      {
      BEEPER == !BEEPER;
      __delay_us (q);
      }
if(SW1 == 0)
  {
          RESET();
  }
      }
}