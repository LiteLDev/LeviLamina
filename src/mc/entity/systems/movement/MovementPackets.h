#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementPackets {
public:
    // prevent constructor by default
    MovementPackets& operator=(MovementPackets const&);
    MovementPackets(MovementPackets const&);
    MovementPackets();

public:
    // NOLINTBEGIN
    MCAPI bool isReadyToSimulate() const;

    // NOLINTEND
};
