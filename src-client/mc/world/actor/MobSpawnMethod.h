#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MobSpawnMethod : uchar {
    Unknown          = 0,
    SpawnEgg         = 1,
    Command          = 2,
    Dispenser        = 3,
    Spawner          = 4,
    SpawnMethodCount = 5,
};
