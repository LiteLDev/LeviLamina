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
struct TickingSystemWithInfo;
struct WaterAnimalFlagComponent;
// clang-format on

class WaterAnimalPreAIStepSystem {
public:
    // WaterAnimalPreAIStepSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::WaterAnimalFlagComponent>,
        ::ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doWaterAnimalPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickWaterAnimalPreAIStepSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::WaterAnimalFlagComponent>,
            ::ActorOwnerComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
