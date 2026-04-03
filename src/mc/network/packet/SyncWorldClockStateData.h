#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncWorldClockStateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mClockId;
    ::ll::TypedStorage<4, 4, int>    mTime;
    ::ll::TypedStorage<1, 1, bool>   mIsPaused;
    // NOLINTEND
};
