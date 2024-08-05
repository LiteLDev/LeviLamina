#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientInputUpdateSystem {
public:
    // prevent constructor by default
    ClientInputUpdateSystem& operator=(ClientInputUpdateSystem const&);
    ClientInputUpdateSystem(ClientInputUpdateSystem const&);
    ClientInputUpdateSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
