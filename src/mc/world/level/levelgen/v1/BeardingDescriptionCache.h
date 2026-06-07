#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

class BeardingDescriptionCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> mPieceBounds;
    ::ll::TypedStorage<4, 4, int>            mPieceBaseY;
    ::ll::TypedStorage<4, 4, int>            mXCenter;
    ::ll::TypedStorage<4, 4, int>            mZCenter;
    ::ll::TypedStorage<4, 4, float>          mMaxRadius;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardingDescriptionCache();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeardingDescriptionCache(::BoundingBox const& bb, int deltaY);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BoundingBox const& bb, int deltaY);
    // NOLINTEND
};
