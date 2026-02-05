#include "grains.h"
#include <stdint.h>


uint64_t square(uint8_t index){
  // This needs to calculate the amount of grains on square index. 
  // This is going to be the final value in the lower function.
    int iterations = 0;
    if (!index) {
        iterations = index;
    }
    else {
        iterations = 64; 
    }
    int result = 0; 
    for (int i = 0; i < iterations; i++) {
        result += i * i; 
    }
    return result; 
}

uint64_t total(){
// This needs to calculate the amount of grains on the board up to and including square index.
// This is going to be a recursive function taking an argument and returning res += i * 
// else use index in the loop
    return square(64); 
}
