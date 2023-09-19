#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailMovementComponent {
public:
    // prevent constructor by default
    RailMovementComponent& operator=(RailMovementComponent const&);
    RailMovementComponent(RailMovementComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RailMovementComponent@@QEAA@XZ
    MCAPI RailMovementComponent();

    // symbol: ?getMaxSpeed@RailMovementComponent@@QEBAMXZ
    MCAPI float getMaxSpeed() const;

    // NOLINTEND
};
