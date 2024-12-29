#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NodeType : int {
    Stairs        = -7,
    Honeyblock    = -6,
    Unwalkable    = -5,
    Hotblock      = -4,
    Fence         = -3,
    Lava          = -2,
    Water         = -1,
    Blocked       = 0,
    Breakable     = 1,
    Open          = 2,
    Walkable      = 3,
    Climbable     = 4,
    Swimmable     = 5,
    Breachable    = 6,
    Flyable       = 7,
    Door          = 8,
    OpenTypeCount = 9,
};
