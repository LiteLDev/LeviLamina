/**
 * @file  MovementInterpolatorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1354367218
     * @symbol ?isActive@MovementInterpolatorComponent@@QEBA_NXZ
     */
    MCAPI bool isActive() const;
    /**
     * @hash   -759788480
     * @symbol ?lerpTo@MovementInterpolatorComponent@@QEAAXAEBVVec3@@AEBVVec2@@H@Z
     */
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /**
     * @hash   -1984471831
     * @symbol ?lerpToRotation@MovementInterpolatorComponent@@QEAAXAEBVVec2@@H@Z
     */
    MCAPI void lerpToRotation(class Vec2 const &, int);
    /**
     * @hash   1229269795
     * @symbol ?reset@MovementInterpolatorComponent@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   -623088297
     * @symbol ?setHeadYawLerpTarget@MovementInterpolatorComponent@@QEAAXMH@Z
     */
    MCAPI void setHeadYawLerpTarget(float, int);
    /**
     * @hash   -1715511063
     * @symbol ?start@MovementInterpolatorComponent@@QEAAXXZ
     */
    MCAPI void start();
    /**
     * @hash   1779120087
     * @symbol ?stop@MovementInterpolatorComponent@@QEAAXXZ
     */
    MCAPI void stop();

};