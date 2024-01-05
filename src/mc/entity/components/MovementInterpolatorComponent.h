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
    // symbol: ?isActive@MovementInterpolatorComponent@@QEBA_NXZ
    MCAPI bool isActive() const;

    // symbol: ?lerpTo@MovementInterpolatorComponent@@QEAAXAEBVVec3@@AEBVVec2@@H@Z
    MCAPI void lerpTo(class Vec3 const& pos, class Vec2 const& rot, int steps);

    // symbol: ?lerpToRotation@MovementInterpolatorComponent@@QEAAXAEBVVec2@@H@Z
    MCAPI void lerpToRotation(class Vec2 const& rot, int steps);

    // symbol: ?reset@MovementInterpolatorComponent@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?setHeadYawLerpTarget@MovementInterpolatorComponent@@QEAAXMH@Z
    MCAPI void setHeadYawLerpTarget(float headYaw, int steps);

    // symbol: ?start@MovementInterpolatorComponent@@QEAAXXZ
    MCAPI void start();

    // symbol: ?stop@MovementInterpolatorComponent@@QEAAXXZ
    MCAPI void stop();

    // NOLINTEND
};
