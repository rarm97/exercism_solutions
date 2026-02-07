#include "collatz_conjecture.h"
//If it's even, divide it by 2.
//If it's odd, multiply it by 3 and add 1.

int steps(int start)
{
   if (start < 1)
      return ERROR_VALUE;
   int step_count = 0;
   while (start != 1) {
      if (!(start & 1))
         start = start >> 1;
      else
         start = (start * 3) + 1;
      step_count++;
   }
   return step_count;
}

