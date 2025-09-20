#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

enum class EventType : uchar {
    EntityFallOn     = 0,
    Place            = 1,
    StateChange      = 2,
    PlayerDestroy    = 3,
    PlayerInteract   = 4,
    PlayerPlacing    = 5,
    QueuedTick       = 6,
    RandomTick       = 7,
    RandomTickLegacy = 8,
    StepOff          = 9,
    StepOn           = 10,
    IsValidSpawn     = 11,
    Count            = 12,
};

}
