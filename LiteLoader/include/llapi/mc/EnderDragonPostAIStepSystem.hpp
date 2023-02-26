/**
 * @file  EnderDragonPostAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderDragonPostAIStepSystem.
 *
 */
class EnderDragonPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERDRAGONPOSTAISTEPSYSTEM
public:
    class EnderDragonPostAIStepSystem& operator=(class EnderDragonPostAIStepSystem const &) = delete;
    EnderDragonPostAIStepSystem(class EnderDragonPostAIStepSystem const &) = delete;
    EnderDragonPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@EnderDragonPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doEnderDragonPostAIStepSystem\@EnderDragonPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doEnderDragonPostAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};