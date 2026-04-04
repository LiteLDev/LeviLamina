#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct GuardianFlagComponent;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
// clang-format on

class GuardianPreAIStepSystem {
public:
    // GuardianPreAIStepSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::GuardianFlagComponent>,
        ::ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doGuardianPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickGuardianPreAIStepSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::GuardianFlagComponent>,
            ::ActorOwnerComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
