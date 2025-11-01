#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
struct RopeAABB;
// clang-format on

struct AABBBucket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB> mBucketBounds;
    ::ll::TypedStorage<4, 4, int> mCachedTicks;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeAABB>> mBBs;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<1, 1, bool> mNeedsFinalize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void mergeAABBs();
    // NOLINTEND

};
