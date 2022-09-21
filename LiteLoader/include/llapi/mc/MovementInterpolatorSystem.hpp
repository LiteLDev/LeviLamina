/**
 * @file  MC/MovementInterpolatorSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MovementInterpolatorSystem.
 *
 */
class MovementInterpolatorSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORSYSTEM
public:
    class MovementInterpolatorSystem& operator=(class MovementInterpolatorSystem const &) = delete;
    MovementInterpolatorSystem(class MovementInterpolatorSystem const &) = delete;
    MovementInterpolatorSystem() = delete;
#endif

public:
    /**
     * @hash   460895171
     * @symbol ?onGroundPostTick@MovementInterpolatorSystem@@SAXAEBUMovementInterpolatorComponent@@AEAUStateVectorComponent@@@Z
     */
    MCAPI static void onGroundPostTick(struct MovementInterpolatorComponent const &, struct StateVectorComponent &);
    /**
     * @hash   209355328
     * @symbol ?tick@MovementInterpolatorSystem@@SAXAEAVActor@@@Z
     */
    MCAPI static void tick(class Actor &);

};