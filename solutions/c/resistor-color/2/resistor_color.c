#include "resistor_color.h"

static resistor_band_t colour_array[10] = {COLOURS};

resistor_band_t *colours(void)
{
   return colour_array;
}

int color_code(resistor_band_t colour)
{
   return colour;
}
