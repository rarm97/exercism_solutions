#include "darts.h"
#include <math.h>

int score(coordinate_t coordinate) {
  float throw_row = fabs(coordinate.row);
  float throw_col = fabs(coordinate.column);
  float max_index; 
  if (throw_row > throw_col){
    max_index = throw_row;
  }
  else {
    max_index = throw_col;
  }
  if (throw_row > 10){
    return 0;
  }
  if (throw_col > 10){
    return 0;
  }
  
  if (max_index < 1) {
    return 10;
  }
  return 0;
}

