#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailMovementComponent {
public:
    // prevent constructor by default
    RailMovementComponent& operator=(RailMovementComponent const&);
    RailMovementComponent(RailMovementComponent const&);

public:
    // NOLINTBEGIN
    MCAPI RailMovementComponent();

    MCAPI float getMaxSpeed() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
