#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IllagerBeastPostAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILLAGERBEASTPOSTAISTEPSYSTEM
public:
    IllagerBeastPostAIStepSystem& operator=(IllagerBeastPostAIStepSystem const&) = delete;
    IllagerBeastPostAIStepSystem(IllagerBeastPostAIStepSystem const&)            = delete;
    IllagerBeastPostAIStepSystem()                                               = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@IllagerBeastPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doIllagerBeastPostAIStepSystem\@IllagerBeastPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAUSubBBsComponent\@\@\@Z
     */
    MCAPI static void
    _doIllagerBeastPostAIStepSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct SubBBsComponent&);

private:
};
