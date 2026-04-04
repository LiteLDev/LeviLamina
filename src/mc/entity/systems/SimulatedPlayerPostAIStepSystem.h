#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct SimulatedPlayerFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class SimulatedPlayerPostAIStepSystem {
public:
    // SimulatedPlayerPostAIStepSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::SimulatedPlayerFlagComponent>,
        ::ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doSimulatedPlayerPostAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
