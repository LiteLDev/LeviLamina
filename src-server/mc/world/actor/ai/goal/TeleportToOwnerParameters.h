#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TeleportToOwnerParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinTargetRadius;
    ::ll::TypedStorage<4, 4, int> mMaxTargetRadius;
    ::ll::TypedStorage<1, 1, bool> mRandomizeAndCheckForClearance;
    // NOLINTEND

};
