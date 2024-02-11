#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySensorSystem {
public:
    // prevent constructor by default
    EntitySensorSystem& operator=(EntitySensorSystem const&);
    EntitySensorSystem(EntitySensorSystem const&);
    EntitySensorSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@EntitySensorSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickEntitySensorComponent@EntitySensorSystem@@CAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@AEAVEntitySensorComponent@@AEBUCurrentTickComponent@@@Z
    MCAPI static void
    _tickEntitySensorComponent(class StrictEntityContext&, class ActorOwnerComponent&, class EntitySensorComponent&, struct CurrentTickComponent const&);

    // NOLINTEND
};
