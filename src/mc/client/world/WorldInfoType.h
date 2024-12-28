#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WorldInfoType : uint {
    None     = 0,
    Local    = 1,
    Remote   = 2,
    External = 3,
    XboxLive = 4,
    Realms   = 5,
    Template = 6,
};
