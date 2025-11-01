#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/util/LoadingScreenId.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct ChangeDimensionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<1, 1, bool> mRespawn;
    ::ll::TypedStorage<4, 8, ::LoadingScreenId> mLoadingScreenId;
    // NOLINTEND

};
