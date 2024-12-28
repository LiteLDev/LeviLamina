#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayScreenDefaultTab : int {
    // bitfield representation
    World         = 0,
    Friends       = 1 << 0,
    Servers       = 1 << 1,
    LastLegacyTab = 1 << 1,
    Count         = 1 << 2,
    Realms        = Friends | LastLegacyTab,
};
