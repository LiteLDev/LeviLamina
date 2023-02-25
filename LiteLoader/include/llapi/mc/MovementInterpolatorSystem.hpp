/**
 * @file  MovementInterpolatorSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?createOnGroundPostTickSystem\@MovementInterpolatorSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createOnGroundPostTickSystem();
    /**
     * @symbol  ?createTickSystem\@MovementInterpolatorSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createTickSystem(bool);
    /**
     * @symbol  ?onGroundPostTick\@MovementInterpolatorSystem\@\@SAXAEBUMovementInterpolatorComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void onGroundPostTick(struct MovementInterpolatorComponent const &, struct StateVectorComponent &);
    /**
     * @symbol  ?tick\@MovementInterpolatorSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void tick(class Actor &);

};