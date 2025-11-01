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
// clang-format on

class IllagerBeastPostAIStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doIllagerBeastPostAIStepSystem(::StrictEntityContext const&, ::StateVectorComponent const& stateVectorComponent, ::SubBBsComponent& subBBsComponent);

    MCNAPI static void _tickIllagerBeastPostAIStepSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::IllagerBeastFlagComponent>, ::StateVectorComponent const, ::SubBBsComponent> view);
    // NOLINTEND

};
