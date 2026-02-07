#include "collatz_conjecture.h"
//If it's even, divide it by 2.
//If it's odd, multiply it by 3 and add 1.

int steps(int start){
  int steps = 0; 
  if (start < 1) {
    return -1;
  };
  while (start != 1) {
    steps += 1; 
    if (start % 2 == 0){
      start = start / 2; 
    }
    else {
      start = (start * 3) + 1; 
    };
  }
}
