#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DirectionId : uchar {
    Move = 0,
    Turn = 1,
    Scroll = 2,
    TurnRaw = 3,
    TurnUp = 4,
    TurnDown = 5,
    TurnLeft = 6,
    TurnRight = 7,
    Count = 8,
};
