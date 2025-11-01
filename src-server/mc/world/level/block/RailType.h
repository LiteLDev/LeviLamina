#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RailType : int {
    FlatNorthSouth = 0,
    FlatEastWest = 1,
    AscendingEast = 2,
    AscendingWest = 3,
    AscendingNorth = 4,
    AscendingSouth = 5,
    CurvedSouthEast = 6,
    CurvedSouthWest = 7,
    CurvedNorthWest = 8,
    CurvedNorthEast = 9,
    Count = 10,
};
