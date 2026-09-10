#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

namespace PointLighting {

struct ProbeBatchEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mProbePos;
    ::ll::TypedStorage<4, 4, float>       mDistanceFromCamera;
    ::ll::TypedStorage<1, 1, bool>        mIsFrustumVisible;
    ::ll::TypedStorage<1, 1, bool>        mIsDirty;
    ::ll::TypedStorage<1, 1, bool>        mIsBlockChange;
    // NOLINTEND
};

} // namespace PointLighting
