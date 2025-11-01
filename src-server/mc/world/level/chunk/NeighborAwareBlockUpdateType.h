#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NeighborAwareBlockUpdateType : int {
    None                 = 0,
    WallBlockConnections = 1,
    ConnectionUpgrade    = 2,
};
