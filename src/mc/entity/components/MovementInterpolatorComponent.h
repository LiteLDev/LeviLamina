#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementInterpolatorComponent {

public:
    // prevent constructor by default
    MovementInterpolatorComponent& operator=(MovementInterpolatorComponent const&) = delete;
    MovementInterpolatorComponent(MovementInterpolatorComponent const&)            = delete;
    MovementInterpolatorComponent()                                                = delete;

public:
    /**
     * @symbol ?isActive\@MovementInterpolatorComponent\@\@QEBA_NXZ
     */
    MCAPI bool isActive() const; // NOLINT
    /**
     * @symbol ?lerpTo\@MovementInterpolatorComponent\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@H\@Z
     */
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, int); // NOLINT
    /**
     * @symbol ?lerpToRotation\@MovementInterpolatorComponent\@\@QEAAXAEBVVec2\@\@H\@Z
     */
    MCAPI void lerpToRotation(class Vec2 const&, int); // NOLINT
    /**
     * @symbol ?reset\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void reset(); // NOLINT
    /**
     * @symbol ?setHeadYawLerpTarget\@MovementInterpolatorComponent\@\@QEAAXMH\@Z
     */
    MCAPI void setHeadYawLerpTarget(float, int); // NOLINT
    /**
     * @symbol ?start\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void start(); // NOLINT
    /**
     * @symbol ?stop\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void stop(); // NOLINT
};
