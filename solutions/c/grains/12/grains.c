#include "grains.h"
#include <stdint.h>


uint64_t square(uint8_t index){
  // This needs to calculate the amount of grains on square index. 
  // This is going to be the final value in the lower function.
  // This isn't a square problem it's the adder that's squared.
    if (index <= 0 || index > 65) return 0; 
    return 2 << (index-1); 
}

uint64_t total(){
// This needs to calculate the amount of grains on the board up to and including square index.
// This is going to be a recursive function taking an argument and returning res += i * 
// else use index in the loop
    return square(64); 
}
