#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/CanSprintResult.h"

struct PlayerInputRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>            mMove;
    ::ll::TypedStorage<1, 1, bool>              mIsSprinting;
    ::ll::TypedStorage<1, 1, bool>              mSprintCanceled;
    ::ll::TypedStorage<1, 1, bool>              mStopSprinting;
    ::ll::TypedStorage<1, 1, bool>              mIsPlayerRiding;
    ::ll::TypedStorage<1, 1, bool>              mUnblockedToStand;
    ::ll::TypedStorage<1, 1, bool>              mUnblockedToSneak;
    ::ll::TypedStorage<1, 1, bool>              mUnblockedToCrawl;
    ::ll::TypedStorage<1, 2, ::CanSprintResult> mCanSprint;
    ::ll::TypedStorage<4, 12, ::Vec3>           mBreathingPoint;
    ::ll::TypedStorage<1, 1, bool>              mBreathingInAir;
    ::ll::TypedStorage<1, 1, bool>              mBreathingInLiquid;
    ::ll::TypedStorage<1, 1, bool>              mHasFlyIntent;
    ::ll::TypedStorage<1, 1, bool>              mHasGlideIntent;
    ::ll::TypedStorage<1, 1, bool>              mInstabuild;
    ::ll::TypedStorage<1, 1, bool>              mMayFly;
    // NOLINTEND
};
