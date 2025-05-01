#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySensorComponent;
class StrictEntityContext;
struct ActorTickedComponent;
struct CurrentTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class EntitySensorSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(
        ::OptionalGlobal<::CurrentTickComponent const> currentTickComponent,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorTickedComponent const>,
            ::ActorOwnerComponent,
            ::EntitySensorComponent> view
    );

    MCNAPI static void _tickEntitySensorComponent(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&        actorOwnerComponent,
        ::EntitySensorComponent&      entitySensorComponent,
        ::CurrentTickComponent const& currentTickComponent
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
