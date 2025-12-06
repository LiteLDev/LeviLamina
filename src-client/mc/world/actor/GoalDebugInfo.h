#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GoalDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mPriority;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<1, 1, bool>           mUsed;
    ::ll::TypedStorage<4, 4, int>            mControlFlag;
    // NOLINTEND
};
