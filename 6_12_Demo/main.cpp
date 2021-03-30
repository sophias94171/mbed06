#include "mbed.h"

using namespace std::chrono;


Ticker flipper;

DigitalOut led1(LED1);

DigitalOut led2(LED3);


void flip()

{

   led2 = !led2;

}


int main()

{

   led2 = 1;

   flipper.attach(&flip, 500ms); // the address of the function to be attached (flip) and the interval (2 seconds)


   // spin in a main loop. flipper will interrupt it to call flip

   while (1)

   {

      led1 = !led1;

      ThisThread::sleep_for(1000ms);

   }

}