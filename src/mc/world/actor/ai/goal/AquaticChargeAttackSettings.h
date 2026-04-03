#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

struct AquaticChargeAttackSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mMaxChargeDistance;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>    mLegacyChargeSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mChargeSpeed;
    ::ll::TypedStorage<4, 4, float>                     mAttackReach;
    ::ll::TypedStorage<4, 4, float>                     mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                     mOvershootDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mCooldownTimeSeconds;
    // NOLINTEND
};
