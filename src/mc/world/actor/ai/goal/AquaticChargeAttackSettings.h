#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

struct AquaticChargeAttackSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     maxChargeDistance;
    ::ll::TypedStorage<4, 4, float>                     chargeSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                     attackReach;
    ::ll::TypedStorage<4, 4, float>                     knockbackForce;
    ::ll::TypedStorage<4, 4, float>                     overshootDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> cooldownTimeSeconds;
    // NOLINTEND
};
