/**
 * @file  MovementInterpolatorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MovementInterpolatorComponent.
 *
 */
struct MovementInterpolatorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORCOMPONENT
public:
    struct MovementInterpolatorComponent& operator=(struct MovementInterpolatorComponent const &) = delete;
    MovementInterpolatorComponent(struct MovementInterpolatorComponent const &) = delete;
    MovementInterpolatorComponent() = delete;
#endif

public:
    /**
     * @hash   1504736706
     * @symbol  ?isActive\@MovementInterpolatorComponent\@\@QEBA_NXZ
     */
    MCAPI bool isActive() const;
    /**
     * @hash   -609418992
     * @symbol  ?lerpTo\@MovementInterpolatorComponent\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@H\@Z
     */
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /**
     * @hash   -1834102343
     * @symbol  ?lerpToRotation\@MovementInterpolatorComponent\@\@QEAAXAEBVVec2\@\@H\@Z
     */
    MCAPI void lerpToRotation(class Vec2 const &, int);
    /**
     * @hash   1379639283
     * @symbol  ?reset\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   -472718809
     * @symbol  ?setHeadYawLerpTarget\@MovementInterpolatorComponent\@\@QEAAXMH\@Z
     */
    MCAPI void setHeadYawLerpTarget(float, int);
    /**
     * @hash   -1565141575
     * @symbol  ?start\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void start();
    /**
     * @hash   1929489575
     * @symbol  ?stop\@MovementInterpolatorComponent\@\@QEAAXXZ
     */
    MCAPI void stop();

};