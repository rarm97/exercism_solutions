#include "leap.h"
#include <stdbool.h>
#include <stdio.h>

bool leap(int year)
{
  bool is_leap; 

  is_leap = year % 4 == 0;
  return is_leap;
}

