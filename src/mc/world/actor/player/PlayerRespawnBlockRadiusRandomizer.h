#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerRespawnBlockRadiusRandomizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSpawnRadius;
    ::ll::TypedStorage<4, 4, uint> mPossibleOrigins;
    ::ll::TypedStorage<4, 4, uint> mLargestPrime;
    ::ll::TypedStorage<4, 4, uint> mStartOrigin;
    ::ll::TypedStorage<4, 4, uint> mCurrentOrigin;
    ::ll::TypedStorage<4, 4, uint> mIterationCount;
    // NOLINTEND
};
