#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"

struct ApplyKnockbackRulesPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
    ::ll::TypedStorage<4, 4, float>               mHorizontalPower;
    ::ll::TypedStorage<4, 4, float>               mVerticalPower;
    ::ll::TypedStorage<4, 4, float>               mVerticalVelocityCap;
    ::ll::TypedStorage<1, 1, bool>                mCheckIfTargetIsImmersedInWater;
    ::ll::TypedStorage<4, 4, float>               mScalePreviousVelocity;
    ::ll::TypedStorage<4, 4, float>               mHorizontalAngleScale;
    ::ll::TypedStorage<4, 4, float>               mVerticalHitAngleScale;
    ::ll::TypedStorage<4, 4, float>               mVerticalPositionAngleScale;
    ::ll::TypedStorage<1, 1, bool>                mScaleWithDamage;
    // NOLINTEND
};
