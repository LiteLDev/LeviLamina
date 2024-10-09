#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

class EntitySensorSystem {
public:
    // prevent constructor by default
    EntitySensorSystem& operator=(EntitySensorSystem const&);
    EntitySensorSystem(EntitySensorSystem const&);
    EntitySensorSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tick(
        class OptionalGlobal<struct CurrentTickComponent const> currentTickComponent,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorTickedFlag> const>,
            class ActorOwnerComponent,
            class EntitySensorComponent> view
    );

    MCAPI static void _tickEntitySensorComponent(
        class StrictEntityContext&,
        class ActorOwnerComponent&         actorOwnerComponent,
        class EntitySensorComponent&       entitySensorComponent,
        struct CurrentTickComponent const& currentTickComponent
    );

    // NOLINTEND
};
