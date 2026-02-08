#ifndef DARTS_H
#define DARTS_H

typedef struct {
   float row;
   float column;
} coordinate_t;

int score(coordinate_t);
float landed(coordinate_t);

#endif
