#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientPlayMode : uint {
    Normal              = 0,
    Teaser              = 1,
    Screen              = 2,
    Viewer              = 3,
    Reality             = 4,
    Placement           = 5,
    LivingRoom          = 6,
    ExitLevel           = 7,
    ExitLevelLivingRoom = 8,
    NumModes            = 9,
};
