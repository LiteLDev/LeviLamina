#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct MobBodyRotationComponent;
struct StateVectorComponent;
// clang-format on

class ShulkerPostAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doShulkerPostAiStepSystem(
        ::StrictEntityContext const&,
        ::ActorRotationComponent&   actorRotationComponent,
        ::MobBodyRotationComponent& mobBodyRotationComponent,
        ::StateVectorComponent&     stateVectorComponent
    );
    // NOLINTEND
};
