#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct HurtEffectsSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mKnockback;
    ::ll::TypedStorage<1, 1, bool>                     mIgnition;
    ::ll::TypedStorage<1, 1, bool>                     mReceiveDamage;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mAimDirection;
    ::ll::TypedStorage<4, 4, float>                    mExtraKnockbackPower;
    // NOLINTEND
};
