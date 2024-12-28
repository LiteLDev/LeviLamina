#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct SimulatedPlayerFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class SimulatedPlayerPreAIStepSystem {
public:
    // prevent constructor by default
    SimulatedPlayerPreAIStepSystem& operator=(SimulatedPlayerPreAIStepSystem const&);
    SimulatedPlayerPreAIStepSystem(SimulatedPlayerPreAIStepSystem const&);
    SimulatedPlayerPreAIStepSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doSimulatedPlayerPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
