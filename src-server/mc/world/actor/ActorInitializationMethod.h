#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorInitializationMethod : uchar {
    Invalid = 0,
    Loaded = 1,
    Spawned = 2,
    Born = 3,
    Transformed = 4,
    Updated = 5,
    Event = 6,
    Legacy = 7,
};
