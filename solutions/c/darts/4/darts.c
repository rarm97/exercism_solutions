#include "darts.h"
#include <math.h>

float landed(coordinate_t throw){
  return hypotf(throw.column, throw.row);
}

int score(coordinate_t coordinate) {
  float hit = landed(coordinate);
  if (hit >= 10){
    return 0;
  }
  
  if (hit <= 1) {
    return 10;
  }
  if (hit <= 5) {
    return 5;
  }
  if (hit <= 10 ){
    return 1;
  }
  return 0;
}

