#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AgentRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mEaseIn;
    ::ll::TypedStorage<8, 8, int64> mOldTime;
    // NOLINTEND
};
