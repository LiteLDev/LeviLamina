#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommonDirection : int {
    North          = 0,
    East           = 1,
    South          = 2,
    West           = 3,
    DownNorthSouth = 4,
    DownEastWest   = 5,
    UpNorthSouth   = 6,
    UpEastWest     = 7,
    AscendingEast  = 8,
    AscendingWest  = 9,
    AscendingNorth = 10,
    AscendingSouth = 11,
    SouthEast      = 12,
    SouthWest      = 13,
    NorthWest      = 14,
    NorthEast      = 15,
    None           = 16,
};
