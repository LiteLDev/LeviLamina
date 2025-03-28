#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
struct RopeAABB;
// clang-format on

struct AABBBucket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB>                    mBucketBounds;
    ::ll::TypedStorage<4, 4, int>                        mCachedTicks;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeAABB>> mBBs;
    ::ll::TypedStorage<1, 1, bool>                       mDirty;
    ::ll::TypedStorage<1, 1, bool>                       mNeedsFinalize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void mergeAABBs();
    // NOLINTEND
};
