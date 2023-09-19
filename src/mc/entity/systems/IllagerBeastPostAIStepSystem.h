#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IllagerBeastPostAIStepSystem {
public:
    // prevent constructor by default
    IllagerBeastPostAIStepSystem& operator=(IllagerBeastPostAIStepSystem const&);
    IllagerBeastPostAIStepSystem(IllagerBeastPostAIStepSystem const&);
    IllagerBeastPostAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@IllagerBeastPostAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doIllagerBeastPostAIStepSystem@IllagerBeastPostAIStepSystem@@CAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAUSubBBsComponent@@@Z
    MCAPI static void
    _doIllagerBeastPostAIStepSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct SubBBsComponent&);

    // NOLINTEND
};
