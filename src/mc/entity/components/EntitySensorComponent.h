#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySensorComponent {
public:
    // prevent constructor by default
    EntitySensorComponent& operator=(EntitySensorComponent const&);
    EntitySensorComponent(EntitySensorComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0EntitySensorComponent@@QEAA@XZ
    MCAPI EntitySensorComponent();

    // symbol: ??0EntitySensorComponent@@QEAA@$$QEAV0@@Z
    MCAPI EntitySensorComponent(class EntitySensorComponent&&);

    // symbol: ??4EntitySensorComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class EntitySensorComponent& operator=(class EntitySensorComponent&&);

    // symbol: ?tick@EntitySensorComponent@@QEAAXAEAVActorOwnerComponent@@AEBUTick@@@Z
    MCAPI void tick(class ActorOwnerComponent&, struct Tick const&);

    // symbol: ??1EntitySensorComponent@@QEAA@XZ
    MCAPI ~EntitySensorComponent();

    // NOLINTEND
};
