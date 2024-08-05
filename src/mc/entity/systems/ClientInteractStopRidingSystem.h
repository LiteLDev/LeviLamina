#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientInteractStopRidingSystem {
public:
    // prevent constructor by default
    ClientInteractStopRidingSystem& operator=(ClientInteractStopRidingSystem const&);
    ClientInteractStopRidingSystem(ClientInteractStopRidingSystem const&);
    ClientInteractStopRidingSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
