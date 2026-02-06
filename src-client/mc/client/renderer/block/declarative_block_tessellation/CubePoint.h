#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

namespace DeclarativeBlockTessellation {

struct CubePoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosTxCenterBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>     mPosMetersNorthWestCorner;
    // NOLINTEND
};

} // namespace DeclarativeBlockTessellation
