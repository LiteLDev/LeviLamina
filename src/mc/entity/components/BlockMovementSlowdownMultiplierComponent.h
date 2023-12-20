#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMovementSlowdownMultiplierComponent {
public:
    // prevent constructor by default
    BlockMovementSlowdownMultiplierComponent& operator=(BlockMovementSlowdownMultiplierComponent const&);
    BlockMovementSlowdownMultiplierComponent(BlockMovementSlowdownMultiplierComponent const&);
    BlockMovementSlowdownMultiplierComponent();

public:
    // NOLINTBEGIN
    // symbol: ?setMultiplier@BlockMovementSlowdownMultiplierComponent@@QEAAXAEBVVec3@@@Z
    MCAPI void setMultiplier(class Vec3 const&);

    // NOLINTEND
};
