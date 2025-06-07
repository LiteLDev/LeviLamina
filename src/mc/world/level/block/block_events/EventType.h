#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

enum class EventType : uchar {
    EntityFallOn     = 0,
    Place            = 1,
    PlayerDestroy    = 2,
    PlayerInteract   = 3,
    PlayerPlacing    = 4,
    QueuedTick       = 5,
    RandomTick       = 6,
    RandomTickLegacy = 7,
    StepOff          = 8,
    StepOn           = 9,
    IsValidSpawn     = 10,
    Count            = 11,
};

}
