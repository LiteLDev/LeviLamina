#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

class ParticlesTeleportTrailEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mStart;
    ::ll::TypedStorage<4, 12, ::Vec3> mEnd;
    ::ll::TypedStorage<4, 8, ::Vec2>  mVariation;
    ::ll::TypedStorage<4, 4, float>   mDirScale;
    ::ll::TypedStorage<4, 4, int>     mCount;
    // NOLINTEND
};
