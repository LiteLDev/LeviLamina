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
struct LocalPlayerComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

struct VehicleInputSwitchRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void _tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::LocalPlayerComponent>,
            ::ActorOwnerComponent const,
            ::VanillaClientGameplayComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
