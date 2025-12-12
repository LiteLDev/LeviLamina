#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct OffsetsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mHeightOffset;
    ::ll::TypedStorage<4, 4, float>   mExplosionOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mHeadOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mDropOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mEyeOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mMouthOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mBreathingOffset;
    // NOLINTEND
};
