#include "grains.h"
#include <stdint.h>


uint64_t square(uint8_t index){
  // This needs to calculate the amount of grains on square index. 
  // This is going to be the final value in the lower function.
  // This isn't a square problem it's the adder that's squared.
    if (index < 1 || index > 64) return 0; 
    uint64_t out = 1;
    return out << (index-1); 
}

uint64_t total(){
// This needs to calculate the amount of grains on the board up to and including square index.
// This is going to be a recursive function taking an argument and returning res += i * 
// else use index in the loop
    uint64_t sum = 0; 
    uint64_t one = 1; 
    for (uint8_t i = 0; i<64; i++ ) {
      sum+=one<<i;
    }
    return sum;
}

