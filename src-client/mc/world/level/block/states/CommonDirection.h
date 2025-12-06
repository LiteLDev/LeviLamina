#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommonDirection : int {
    North          = 0,
    East           = 1,
    South          = 2,
    West           = 3,
    DownNorthSouth = 4,
    DownEastWest   = 5,
    DownEast       = 6,
    DownNorth      = 7,
    DownSouth      = 8,
    DownWest       = 9,
    UpNorthSouth   = 10,
    UpEastWest     = 11,
    UpEast         = 12,
    UpNorth        = 13,
    UpSouth        = 14,
    UpWest         = 15,
    AscendingEast  = 16,
    AscendingWest  = 17,
    AscendingNorth = 18,
    AscendingSouth = 19,
    SouthEast      = 20,
    SouthWest      = 21,
    NorthWest      = 22,
    NorthEast      = 23,
    None           = 24,
};
