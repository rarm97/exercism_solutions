#include "collatz_conjecture.h"
//If it's even, divide it by 2.
//If it's odd, multiply it by 3 and add 1.

int even(int num){
  return num / 2; 
}

int odd(int num){
  return (num * 3) + 1; 
}

int steps(int start){
  int steps = 0; 
  if (start < 1) {
    return 0;
  };
  while (1==1) {
    steps += 1; 
    if (start % 2 == 0){
      start = even(start); 
      continue;
    }
    else {
      start = odd(start);
      continue;
    };
  }
}
