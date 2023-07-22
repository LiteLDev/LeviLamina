/**
 * @file  SquidPostAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SquidPostAIStepSystem.
 *
 */
class SquidPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDPOSTAISTEPSYSTEM
public:
    class SquidPostAIStepSystem& operator=(class SquidPostAIStepSystem const &) = delete;
    SquidPostAIStepSystem(class SquidPostAIStepSystem const &) = delete;
    SquidPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@SquidPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doSquidPostAIStepSystem\@SquidPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSquidPostAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};