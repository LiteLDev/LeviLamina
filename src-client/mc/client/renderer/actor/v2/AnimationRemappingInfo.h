#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AnimationRemappingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRemappingOffset;
    ::ll::TypedStorage<4, 4, uint> mRemappingCount;
    // NOLINTEND
};
