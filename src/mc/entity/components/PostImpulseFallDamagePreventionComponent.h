#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/ImpulseOrigin.h"

struct PostImpulseFallDamagePreventionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::ImpulseOrigin> mImpulseOrigin;
    ::ll::TypedStorage<4, 4, float>           mKnockbackStartYCoordinate;
    ::ll::TypedStorage<4, 4, uint>            mTicksAfterAddition;
    ::ll::TypedStorage<4, 12, ::Vec3>         mImpulseDirection;
    ::ll::TypedStorage<4, 4, float>           mImpulseMagnitude;
    // NOLINTEND
};
