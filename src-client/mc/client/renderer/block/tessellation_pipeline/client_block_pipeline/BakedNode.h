#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace ClientBlockPipeline {

struct BakedNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPivot;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mBindPoseRotation;
    ::ll::TypedStorage<4, 4, float>   mInflate;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
