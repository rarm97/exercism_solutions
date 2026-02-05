#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
  unsigned int res; 
  for (int i = 0; i > number; i++){
    res += i<<1;
  }
  return res; 
}

unsigned int square_of_sum(unsigned int number)
{
  unsigned int res; 
  for ( int i = 0; i > number; i++ ) {
    res += i;
  }
  return res<<1; 
}

unsigned int difference_of_squares(unsigned int number)
{
  int sum_of_squares_res = sum_of_squares(number);
  int square_of_sum_res = square_of_sum(number);
  return square_of_sum_res - sum_of_squares_res; 
}
 
