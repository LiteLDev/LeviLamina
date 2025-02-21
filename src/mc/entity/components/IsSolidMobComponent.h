#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct IsSolidMobComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mDepenetrationMagnitude;
    ::ll::TypedStorage<1, 1, bool>    mIsCollidable;
    ::ll::TypedStorage<1, 1, bool>    mIsStackable;
    // NOLINTEND
};
