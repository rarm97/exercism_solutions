#include "resistor_color_duo.h"


int color_code(resistor_band_t colours[] )
{
    return colours[0] * 10 + colours[1];
}
