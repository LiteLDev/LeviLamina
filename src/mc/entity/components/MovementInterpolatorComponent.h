#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
// clang-format on

struct MovementInterpolatorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnka3e4c0;
    ::ll::UntypedStorage<4, 8>  mUnkb94c7d;
    ::ll::UntypedStorage<4, 4>  mUnkdd6ad9;
    ::ll::UntypedStorage<4, 4>  mUnk1411e8;
    ::ll::UntypedStorage<4, 4>  mUnkcda0b1;
    ::ll::UntypedStorage<4, 4>  mUnk734337;
    ::ll::UntypedStorage<1, 1>  mUnkadfe34;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementInterpolatorComponent& operator=(MovementInterpolatorComponent const&);
    MovementInterpolatorComponent(MovementInterpolatorComponent const&);
    MovementInterpolatorComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isActive() const;

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, int steps);

    MCAPI void lerpToRotation(::Vec2 const& rot, int steps);

    MCAPI void reset();

    MCAPI void setHeadYawLerpTarget(float headYaw, int steps);
    // NOLINTEND
};
