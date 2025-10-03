#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/Projection.h"

struct JigsawJunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>  mSourceBlockPos;
    ::ll::TypedStorage<4, 4, int>          mDeltaSourceY;
    ::ll::TypedStorage<4, 4, int>          mDeltaTargetY;
    ::ll::TypedStorage<1, 1, ::Projection> mSourceProjection;
    ::ll::TypedStorage<1, 1, ::Projection> mTargetProjection;
    // NOLINTEND
};
