#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnderManPreAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMANPREAISTEPSYSTEM
public:
    EnderManPreAIStepSystem& operator=(EnderManPreAIStepSystem const&) = delete;
    EnderManPreAIStepSystem(EnderManPreAIStepSystem const&)            = delete;
    EnderManPreAIStepSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@EnderManPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
