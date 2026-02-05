#include "leap.h"
#include <stdbool.h>
#include <stdio.h>

bool leap_year(int year)
{
  bool is_leap; 

  is_leap = year % 4 == 0;
  return is_leap;
}

