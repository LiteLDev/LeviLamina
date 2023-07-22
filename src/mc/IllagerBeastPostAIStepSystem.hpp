/**
 * @file  IllagerBeastPostAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IllagerBeastPostAIStepSystem.
 *
 */
class IllagerBeastPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILLAGERBEASTPOSTAISTEPSYSTEM
public:
    class IllagerBeastPostAIStepSystem& operator=(class IllagerBeastPostAIStepSystem const &) = delete;
    IllagerBeastPostAIStepSystem(class IllagerBeastPostAIStepSystem const &) = delete;
    IllagerBeastPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@IllagerBeastPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doIllagerBeastPostAIStepSystem\@IllagerBeastPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAUSubBBsComponent\@\@\@Z
     */
    MCAPI static void _doIllagerBeastPostAIStepSystem(class StrictEntityContext const &, struct StateVectorComponent const &, struct SubBBsComponent &);

private:

};