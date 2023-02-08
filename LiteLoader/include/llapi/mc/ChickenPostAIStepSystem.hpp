/**
 * @file  ChickenPostAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChickenPostAIStepSystem.
 *
 */
class ChickenPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHICKENPOSTAISTEPSYSTEM
public:
    class ChickenPostAIStepSystem& operator=(class ChickenPostAIStepSystem const &) = delete;
    ChickenPostAIStepSystem(class ChickenPostAIStepSystem const &) = delete;
    ChickenPostAIStepSystem() = delete;
#endif

public:
    /**
     * @hash   2018947950
     * @symbol  ?createSystem\@ChickenPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @hash   725419597
     * @symbol  ?_doChickenPostAIStepSystem\@ChickenPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doChickenPostAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};