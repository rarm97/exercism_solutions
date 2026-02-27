#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
  // i need to search through the struct, multiply the amount of seconds
  // by the return value.
  float earth_years = seconds / 315587600;
  const double orbital_period[] = {0.2408467, 0.61519726, 1.0,       1.8808158,
                                   11.862615, 29.447498,  84.016846, 164.79132};
  if (planet >= 0 && planet <= 7) {
    return orbital_period[planet] / earth_years;
  } else {
    return -1;
  }
}
