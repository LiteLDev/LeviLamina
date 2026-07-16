#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeMountainParamsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSteepBlock;
    ::ll::TypedStorage<1, 1, bool> mNorthSlopes;
    ::ll::TypedStorage<1, 1, bool> mSouthSlopes;
    ::ll::TypedStorage<1, 1, bool> mWestSlopes;
    ::ll::TypedStorage<1, 1, bool> mEastSlopes;
    ::ll::TypedStorage<1, 1, bool> mTopSlideEnabled;
    // NOLINTEND
};
