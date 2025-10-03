#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorTickedComponent;
struct DashCooldownTimerComponent;
struct TickingSystemWithInfo;
// clang-format on

class DashSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickDashSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorTickedComponent>,
            ::ActorOwnerComponent,
            ::DashCooldownTimerComponent>              view,
        ::EntityModifier<::DashCooldownTimerComponent> modifier
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
