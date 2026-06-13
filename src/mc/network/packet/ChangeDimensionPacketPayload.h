#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/LoadingScreenId.h"
#include "mc/world/level/dimension/DimensionType.h"

struct ChangeDimensionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType>   mDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>           mPos;
    ::ll::TypedStorage<1, 1, bool>              mRespawn;
    ::ll::TypedStorage<4, 8, ::LoadingScreenId> mLoadingScreenId;
    // NOLINTEND
};
