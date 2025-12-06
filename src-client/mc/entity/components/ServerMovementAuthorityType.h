#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerMovementAuthorityType : int {
    Teleport          = 0,
    DimensionTransfer = 1,
    LoadingScreen     = 2,
    TeleportInTheEnd  = 3,
    Count             = 4,
};
