#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMovementComponent {
public:
    // prevent constructor by default
    WaterMovementComponent& operator=(WaterMovementComponent const&);
    WaterMovementComponent(WaterMovementComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0WaterMovementComponent@@QEAA@XZ
    MCAPI WaterMovementComponent();

    // symbol: ?getDragFactor@WaterMovementComponent@@QEBAMXZ
    MCAPI float getDragFactor() const;

    // symbol: ?initFromDefinition@WaterMovementComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // NOLINTEND
};
