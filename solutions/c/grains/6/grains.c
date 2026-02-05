#include "grains.h"
#include <stdint.h>


uint64_t square(uint8_t index){
  // This needs to calculate the amount of grains on square index. 
  // This is going to be the final value in the lower function.
  // This isn't a square problem it's the adder that's squared.
    int to_add = 1; 
    int result = 0; 
    for (int i = 1; i <= index; i++) {
        result += to_add; 
        if ( i == 1 ) {
          to_add += 1; 
        } else {
          to_add = to_add * to_add; 
        }
    }
    return result; 
}

uint64_t total(){
// This needs to calculate the amount of grains on the board up to and including square index.
// This is going to be a recursive function taking an argument and returning res += i * 
// else use index in the loop
    return square(64); 
}
