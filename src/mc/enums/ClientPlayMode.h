#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientPlayMode : int {
    Normal              = 0x0,
    Teaser              = 0x1,
    Screen              = 0x2,
    Viewer              = 0x3,
    Reality             = 0x4,
    Placement           = 0x5,
    LivingRoom          = 0x6,
    ExitLevel           = 0x7,
    ExitLevelLivingRoom = 0x8,
    NumModes            = 0x9,
};
