#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct AABBContactPoint;
// clang-format on

struct RopeAABB {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB> mBB;
    ::ll::TypedStorage<1, 1, bool>    mDenyListed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getContactPoint(::Vec3 const& nodePos, float nodeSize, ::AABBContactPoint& result) const;
    // NOLINTEND
};
