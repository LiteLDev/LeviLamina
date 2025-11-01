#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BossEventUpdateType : int {
    Add = 0,
    PlayerAdded = 1,
    Remove = 2,
    PlayerRemoved = 3,
    UpdatePercent = 4,
    UpdateName = 5,
    UpdateProperties = 6,
    UpdateStyle = 7,
    Query = 8,
};
