/**
 * @file  WitchPreAIStepSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WitchPreAIStepSystem.
 *
 */
class WitchPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITCHPREAISTEPSYSTEM
public:
    class WitchPreAIStepSystem& operator=(class WitchPreAIStepSystem const &) = delete;
    WitchPreAIStepSystem(class WitchPreAIStepSystem const &) = delete;
    WitchPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@WitchPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1252957252
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doWitchPreAIStepSystem@WitchPreAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     * @hash   -496628799
     */
    MCAPI static void _doWitchPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};