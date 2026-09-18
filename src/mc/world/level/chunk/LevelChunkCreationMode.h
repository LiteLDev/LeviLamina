#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelChunkCreationMode : uchar {
    Stable          = 0,
    GeneratingData  = 1,
    ReplacingData   = 2,
    QueueingUnblock = 3,
};
