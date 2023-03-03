/**
 * @file  ParrotPostAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ParrotPostAIStepSystem.
 *
 */
class ParrotPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROTPOSTAISTEPSYSTEM
public:
    class ParrotPostAIStepSystem& operator=(class ParrotPostAIStepSystem const &) = delete;
    ParrotPostAIStepSystem(class ParrotPostAIStepSystem const &) = delete;
    ParrotPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ParrotPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doParrotPostAIStepSystem\@ParrotPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doParrotPostAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};