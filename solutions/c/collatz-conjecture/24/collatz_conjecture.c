#include "collatz_conjecture.h"
//If it's even, divide it by 2.
//If it's odd, multiply it by 3 and add 1.

int steps(int start)
{
   if (start < 1)
      return ERROR_VALUE;
   int step_count = 0;
   while (start != 1) {
     // Bitwise ANDor check. 1 is 001. 
     // If even number, then 100 (4). And would be 000 (false)
     // If odd, then 101 (5), then would be 001 (true). 
      if (start & 1){
         start = (start * 3) + 1;
      }
      else {
         start = start >> 1;
      }
      step_count++;
   }
   return step_count;
}

