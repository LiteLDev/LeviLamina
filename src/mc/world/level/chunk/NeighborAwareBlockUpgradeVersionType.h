#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NeighborAwareBlockUpgradeVersionType : int {
    None                      = 0,
    WallBlock                 = 1,
    FenceBlock                = 2,
    StairBlock                = 3,
    ThinFenceAndTripWireBlock = 4,
    RedstoneWireBlock         = 5,
    ChorusPlantAndFireBlock   = 6,
    Count                     = 7,
    Latest                    = 6,
};
