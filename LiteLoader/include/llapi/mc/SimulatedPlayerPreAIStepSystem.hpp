/**
 * @file  SimulatedPlayerPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -2065703848
     * @symbol  ?createSystem\@SimulatedPlayerPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @hash   -2024286815
     * @symbol  ?_doSimulatedPlayerPreAIStepSystem\@SimulatedPlayerPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSimulatedPlayerPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};