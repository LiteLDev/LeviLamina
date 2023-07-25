#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementInterpolatorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORCOMPONENT
public:
    MovementInterpolatorComponent& operator=(MovementInterpolatorComponent const&) = delete;
    MovementInterpolatorComponent(MovementInterpolatorComponent const&)            = delete;
    MovementInterpolatorComponent()                                                = delete;
#endif

public:
    /**
     * @symbol ?isActive\@MovementInterpolatorComponent\@\@QEBA_NXZ
     */
    MCAPI bool isActive() const;
    /**
     * @symbol ?lerpTo\@MovementInterpolatorComponent\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@H\@Z
     */
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, int);
    /**
     * @symbol ?lerpToRotation\@MovementInterpolatorComponent\@\@QEAAXAEBVVec2\@\@H\@Z
     */
    MCAPI void lerpToRotation(class Vec2 const&, int);
    /**
     * @symbol ?reset\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol ?setHeadYawLerpTarget\@MovementInterpolatorComponent\@\@QEAAXMH\@Z
     */
    MCAPI void setHeadYawLerpTarget(float, int);
    /**
     * @symbol ?start\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void start();
    /**
     * @symbol ?stop\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void stop();
};
