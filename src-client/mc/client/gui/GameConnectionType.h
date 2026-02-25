#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GameConnectionType : int {
    Local     = 0,
    Lan       = 1,
    External  = 2,
    Realms    = 3,
    Undefined = 4,
};
