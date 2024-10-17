#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BossEventUpdateType : int {
    Add              = 0x0,
    PlayerAdded      = 0x1,
    Remove           = 0x2,
    PlayerRemoved    = 0x3,
    UpdatePercent    = 0x4,
    UpdateName       = 0x5,
    UpdateProperties = 0x6,
    UpdateStyle      = 0x7,
    Query            = 0x8,
};
