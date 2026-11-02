#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlacementConnectionHandleType : int {
    UpgradeConnect             = 0,
    UpgradeConnectWalls        = 1,
    UpgradeConnectRedstoneWire = 2,
    ConnectWalls               = 3,
    Connect                    = 4,
};
