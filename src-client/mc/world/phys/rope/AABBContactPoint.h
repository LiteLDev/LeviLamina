#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct AABBContactPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     mNormalIndex;
    ::ll::TypedStorage<4, 4, float>   mSignedPenetration;
    ::ll::TypedStorage<4, 12, ::Vec3> mNormal;
    // NOLINTEND
};
