#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NodeType : int {
    Stairs        = 4294967289,
    Honeyblock    = 4294967290,
    Unwalkable    = 4294967291,
    Hotblock      = 4294967292,
    Fence         = 4294967293,
    Lava          = 4294967294,
    Water         = 4294967295,
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
