#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "pico/stdlib.h"


std::string calculate_bearing(double d) {
    // Compass directions
    std::vector<std::string> dirs = {
        "N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
        "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"
    };
    // Calculate the index
    int ix = static_cast<int>(std::round(d / (360.0 / dirs.size())));
    // Return the corresponding direction
    return dirs[ix % dirs.size()];
}