/**
 * @file  MC/DesiredMoveDirectionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1395224963
     * @symbol ?rotateTowardsControllingPassenger@DesiredMoveDirectionSystem@@SAX_NAEAVVec2@@1AEAM2AEBV2@@Z
     */
    MCAPI static void rotateTowardsControllingPassenger(bool, class Vec2 &, class Vec2 &, float &, float &, class Vec2 const &);
    /**
     * @hash   -251449754
     * @symbol ?updateLocalMoveVelocity@DesiredMoveDirectionSystem@@SAXAEAM00MMM@Z
     */
    MCAPI static void updateLocalMoveVelocity(float &, float &, float &, float, float, float);

};