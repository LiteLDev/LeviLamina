#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

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
    MCAPI static void
        _tick(class OptionalGlobal<struct CurrentTickComponent const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorTickedFlag> const>, class ActorOwnerComponent, class EntitySensorComponent>);

    MCAPI static void
    _tickEntitySensorComponent(class StrictEntityContext&, class ActorOwnerComponent&, class EntitySensorComponent&, struct CurrentTickComponent const&);

    // NOLINTEND
};
