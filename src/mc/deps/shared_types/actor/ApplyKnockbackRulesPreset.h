#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/actor/ExtraKnockbackApproach.h"
#include "mc/deps/shared_types/actor/KnockbackMode.h"
#include "mc/world/actor/ActorFilterGroup.h"

struct ApplyKnockbackRulesPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                   mFilter;
    ::ll::TypedStorage<4, 8, ::Vec2>                                mPower;
    ::ll::TypedStorage<4, 4, float>                                 mVerticalVelocityCap;
    ::ll::TypedStorage<1, 1, bool>                                  mCheckIfTargetIsImmersedInWater;
    ::ll::TypedStorage<4, 4, float>                                 mSlowdownScale;
    ::ll::TypedStorage<1, 1, bool>                                  mScaleWithDamage;
    ::ll::TypedStorage<1, 1, ::SharedTypes::KnockbackMode>          mKnockbackMode;
    ::ll::TypedStorage<1, 1, ::SharedTypes::ExtraKnockbackApproach> mExtraKnockbackApproach;
    // NOLINTEND
};
