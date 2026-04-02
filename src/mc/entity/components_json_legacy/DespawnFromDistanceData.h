#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DespawnFromDistanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinDespawnRange;
    ::ll::TypedStorage<4, 4, int> mMaxDespawnRange;
    // NOLINTEND
};
