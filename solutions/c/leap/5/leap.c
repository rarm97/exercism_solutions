#include "leap.h"
#include <stdbool.h>
#include <stdio.h>

bool leap_year(int year)
{
  bool is_leap; 

  is_leap = year % 4 == 0;
  if (!is_leap) {
    if (year % 100 == 0) {
      is_leap = true; 
    }
  }
  return is_leap;
}

