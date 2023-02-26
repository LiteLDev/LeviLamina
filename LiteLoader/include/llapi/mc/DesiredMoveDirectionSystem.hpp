/**
 * @file  DesiredMoveDirectionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DesiredMoveDirectionSystem.
 *
 */
class DesiredMoveDirectionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESIREDMOVEDIRECTIONSYSTEM
public:
    class DesiredMoveDirectionSystem& operator=(class DesiredMoveDirectionSystem const &) = delete;
    DesiredMoveDirectionSystem(class DesiredMoveDirectionSystem const &) = delete;
    DesiredMoveDirectionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?rotateTowardsControllingPassenger\@DesiredMoveDirectionSystem\@\@SAX_NAEAVVec2\@\@1AEAM2AEBV2\@\@Z
     */
    MCAPI static void rotateTowardsControllingPassenger(bool, class Vec2 &, class Vec2 &, float &, float &, class Vec2 const &);
    /**
     * @symbol  ?updateLocalMoveVelocity\@DesiredMoveDirectionSystem\@\@SAXAEAM00AEBVVec3\@\@\@Z
     */
    MCAPI static void updateLocalMoveVelocity(float &, float &, float &, class Vec3 const &);

};