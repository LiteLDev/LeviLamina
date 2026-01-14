#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct DensityLimit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSurface;
    ::ll::TypedStorage<4, 4, int> mUnderground;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
