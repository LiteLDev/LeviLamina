#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GameType : int {
    Undefined    = 4294967295,
    Survival     = 0,
    Creative     = 1,
    Adventure    = 2,
    Default      = 5,
    Spectator    = 6,
    WorldDefault = 0,
};
