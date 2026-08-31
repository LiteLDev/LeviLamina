#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelDataLoadResult : int {
    Failed     = 0,
    Full       = 1,
    CachedSlim = 2,
};
