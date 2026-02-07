#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace ClientBlockPipeline {

struct BakedBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mCenter;
    ::ll::TypedStorage<4, 12, ::Vec3> mScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mPivot;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
