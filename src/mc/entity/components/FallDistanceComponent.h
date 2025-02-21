#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FallDistanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValue;
    ::ll::TypedStorage<1, 1, bool>  mIgnoresFallDamage;
    ::ll::TypedStorage<1, 1, bool>  mAccumulatesFallDistance;
    ::ll::TypedStorage<1, 1, bool>  mSpawnParticlesWhenHittingGround;
    // NOLINTEND
};
