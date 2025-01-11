#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct IllagerBeastFlagComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
// clang-format on

class IllagerBeastPostAIStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doIllagerBeastPostAIStepSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const& stateVectorComponent,
        ::SubBBsComponent&            subBBsComponent
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
