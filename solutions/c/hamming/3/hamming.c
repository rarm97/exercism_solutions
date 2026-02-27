#include "hamming.h"
#include <stdio.h>
#include <string.h>

int compute(const char *lhs, const char *rhs) {
  int len_lhs = strlen(lhs);
  int len_rhs = strlen(rhs);
  int hamming_distance = 0;
  if (len_lhs != len_rhs) {
    return 0;
  }
  for (int i = 0; i <= len_lhs; i++) {
    if (lhs[i] == rhs[i]) {
      continue;
    } else {
      hamming_distance++;
    }
  }
  return hamming_distance;
}
