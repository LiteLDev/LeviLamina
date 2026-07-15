#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/knockback_rules/ExtraKnockbackApproach.h"

struct KnockbackParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                    mHorizontalPower;
    ::ll::TypedStorage<4, 4, float>                                    mVerticalPower;
    ::ll::TypedStorage<4, 4, float>                                    mVerticalVelocityCap;
    ::ll::TypedStorage<4, 4, float>                                    mScalePreviousVelocity;
    ::ll::TypedStorage<1, 1, bool>                                     mScaleWithDamage;
    ::ll::TypedStorage<1, 1, bool>                                     mSlowDownAttacker;
    ::ll::TypedStorage<1, 1, bool>                                     mCheckLegacyPreNetherUpdateKnockback;
    ::ll::TypedStorage<4, 4, float>                                    mExtraKnockbackPower;
    ::ll::TypedStorage<1, 1, ::KnockbackRules::ExtraKnockbackApproach> mExtraKnockbackApproach;
    // NOLINTEND
};
