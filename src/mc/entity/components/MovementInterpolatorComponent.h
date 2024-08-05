#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementInterpolatorComponent {
public:
    // prevent constructor by default
    MovementInterpolatorComponent& operator=(MovementInterpolatorComponent const&);
    MovementInterpolatorComponent(MovementInterpolatorComponent const&);
    MovementInterpolatorComponent();

public:
    // NOLINTBEGIN
    MCAPI bool isActive() const;

    MCAPI void lerpTo(class Vec3 const& pos, class Vec2 const& rot, int steps);

    MCAPI void lerpToRotation(class Vec2 const& rot, int steps);

    MCAPI void reset();

    MCAPI void setHeadYawLerpTarget(float headYaw, int steps);

    MCAPI void start();

    MCAPI void stop();

    // NOLINTEND
};
