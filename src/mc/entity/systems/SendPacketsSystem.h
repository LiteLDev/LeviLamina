#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendPacketsSystem {
public:
    // prevent constructor by default
    SendPacketsSystem& operator=(SendPacketsSystem const&);
    SendPacketsSystem(SendPacketsSystem const&);
    SendPacketsSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSendPacketsSystem();

    // NOLINTEND
};
