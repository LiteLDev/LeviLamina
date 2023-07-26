/**
 * @file  SimulatedPlayerPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SimulatedPlayerPreAIStepSystem.
 *
 */
class SimulatedPlayerPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYERPREAISTEPSYSTEM
public:
    class SimulatedPlayerPreAIStepSystem& operator=(class SimulatedPlayerPreAIStepSystem const &) = delete;
    SimulatedPlayerPreAIStepSystem(class SimulatedPlayerPreAIStepSystem const &) = delete;
    SimulatedPlayerPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@SimulatedPlayerPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doSimulatedPlayerPreAIStepSystem\@SimulatedPlayerPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSimulatedPlayerPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};