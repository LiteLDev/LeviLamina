#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersistentTickingAreaLimits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mMaximumAreas;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mMaximumChunkArea;
    // NOLINTEND
};
