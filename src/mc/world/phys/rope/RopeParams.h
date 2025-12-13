#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct RopeParams {
public:
    // RopeParams inner types define
    enum class Flags : int {
        // bitfield representation
        None             = 0,
        DynamicResize    = 1 << 1,
        DynamicStretch   = 1 << 2,
        CollisionEnabled = 1 << 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mNodeDist;
    ::ll::TypedStorage<4, 4, float>   mNodeSize;
    ::ll::TypedStorage<4, 4, float>   mGravity;
    ::ll::TypedStorage<4, 4, float>   mSlack;
    ::ll::TypedStorage<4, 4, float>   mMaxTension;
    ::ll::TypedStorage<4, 4, float>   mVelDamping;
    ::ll::TypedStorage<4, 4, float>   mRelaxation;
    ::ll::TypedStorage<4, 4, float>   mFriction;
    ::ll::TypedStorage<4, 12, ::Vec3> mStartPin;
    ::ll::TypedStorage<4, 12, ::Vec3> mEndPin;
    ::ll::TypedStorage<8, 8, uint64>  mIterations;
    ::ll::TypedStorage<8, 8, uint64>  mDestroyDelay;
    ::ll::TypedStorage<4, 4, int>     mFlags;
    ::ll::TypedStorage<4, 4, float>   mLength;
    ::ll::TypedStorage<4, 4, float>   mOriginalNodeDist;
    // NOLINTEND
};
