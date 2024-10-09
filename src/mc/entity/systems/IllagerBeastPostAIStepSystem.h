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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doIllagerBeastPostAIStepSystem(
        class StrictEntityContext const&,
        struct StateVectorComponent const& stateVectorComponent,
        struct SubBBsComponent&            subBBsComponent
    );

    // NOLINTEND
};
