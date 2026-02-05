#include "leap.h"
#include <stdbool.h>
#include <stdio.h>

bool leap(int year)
{
  return year % 4 == 0;
}

