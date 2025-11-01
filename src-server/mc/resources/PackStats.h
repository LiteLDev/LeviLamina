#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mOverriddenEntityCount;
    ::ll::TypedStorage<4, 4, uint> mCustomEntityCount;
    ::ll::TypedStorage<4, 4, uint> mCustomAnimationCount;
    ::ll::TypedStorage<4, 4, uint> mCustomEffectCount;
    // NOLINTEND

};
