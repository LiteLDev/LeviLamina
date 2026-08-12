#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySensorComponent;
class StrictEntityContext;
struct CurrentTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class EntitySensorSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickEntitySensorComponent(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&        actorOwnerComponent,
        ::EntitySensorComponent&      entitySensorComponent,
        ::CurrentTickComponent const& currentTickComponent
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
