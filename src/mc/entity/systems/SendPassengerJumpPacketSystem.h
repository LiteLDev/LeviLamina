#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendPassengerJumpPacketSystem {
public:
    // prevent constructor by default
    SendPassengerJumpPacketSystem& operator=(SendPassengerJumpPacketSystem const&);
    SendPassengerJumpPacketSystem(SendPassengerJumpPacketSystem const&);
    SendPassengerJumpPacketSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
