#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySystemTickingMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mNormalTick;
    ::ll::TypedStorage<1, 1, bool> mSingleTick;
    // NOLINTEND

};
