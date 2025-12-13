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
struct LocalPlayerComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

struct VehicleInputSwitchRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::LocalPlayerComponent>,
            ::ActorOwnerComponent const,
            ::VanillaClientGameplayComponent> view
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
