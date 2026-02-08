#include "queen_attack.h"
// Can the queens attack each other, this will return a bool (presumably)
// 
attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
  // first it should be if the position is valid. I.e. is below 7 and over 0
  // if straight lines first i.e. if row = row or column = column. 
  int max = 7;
  if (queen_1.row > 7){
    return INVALID_POSITION; 
  }
  if (queen_1.column > 7){
    return INVALID_POSITION; 
  }
  if (queen_2.row > 7){
    return INVALID_POSITION; 
  }
  if (queen_2.column > 7){
    return INVALID_POSITION; 
  }
  if (queen_1.row == queen_2.row && queen_1.column == queen_2.column){
    return INVALID_POSITION; 
  }
  if (queen_1.column == queen_2.column) {
    return CAN_ATTACK;
  }
  else if (queen_1.row == queen_2.row) {
    return CAN_ATTACK; 
  }
  // Iterate through diagonal positions. 
  for ( int i = 0; i <= max; i++){
    if (queen_1.row - i == queen_2.row && queen_1.column - i == queen_2.column){
      return CAN_ATTACK;
    }
    if (queen_1.row + i == queen_2.row && queen_1.column + i == queen_2.column){
      return CAN_ATTACK;
    }
    if (queen_1.row + i == queen_2.row && queen_1.column - i == queen_2.column){
      return CAN_ATTACK;
    }
    if (queen_1.row - i == queen_2.row && queen_1.column + i == queen_2.column){
      return CAN_ATTACK;
    }

  }
  return CAN_NOT_ATTACK; 
}
