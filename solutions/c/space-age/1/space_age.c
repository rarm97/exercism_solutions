#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
  // i need to search through the struct, multiply the amount of seconds
  // by the return value.
  float earth_years = seconds / 315587600;

  if (planet == "Mercury") {

    return earth_years * 0.2408467;
  }
case case "Venus":

case "Earth":

case "Mars":

case "Jupiter":

case "Saturn":

case "Uranus":

case "Neptune":
default:
  return -1;
}

return 0.0;
}

One Earth year equals 365.25 Earth days, or 31,557,600 seconds.
If you were told someone was 1,000,000,000 seconds old, their age would be 31.69 Earth-years.

For the other planets, you have to account for their orbital period in Earth Years:

| Planet  | Orbital period in Earth Years |
| ------- | ----------------------------- |
| Mercury | 0.2408467                     |
| Venus   | 0.61519726                    |
| Earth   | 1.0                           |
| Mars    | 1.8808158                     |
| Jupiter | 11.862615                     |
| Saturn  | 29.447498                     |
| Uranus  | 84.016846                     |
| Neptune | 164.79132                     |
