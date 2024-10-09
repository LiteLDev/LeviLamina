#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMovementComponent {
public:
    // prevent constructor by default
    WaterMovementComponent& operator=(WaterMovementComponent const&);
    WaterMovementComponent(WaterMovementComponent const&);

public:
    // NOLINTBEGIN
    MCAPI WaterMovementComponent();

    MCAPI float getDragFactor() const;

    MCAPI void initFromDefinition(class Actor& owner);

    // NOLINTEND
};
