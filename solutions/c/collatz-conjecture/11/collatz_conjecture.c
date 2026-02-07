#include "collatz_conjecture.h"
//If it's even, divide it by 2.
//If it's odd, multiply it by 3 and add 1.

int odd(int num){
  return num * 3 - 1;
}

int even(int num){
  return num / 2; 
}

int steps(int start){
  int steps = 0; 
  if (start < 1) {
    return -1;
  };
  while (start >= 1) {
    steps++; 
    if (start % 2 == 0){
      start = even(start);
    }
    else {
      start = odd(start);
    };
  }
  return steps; 
}
