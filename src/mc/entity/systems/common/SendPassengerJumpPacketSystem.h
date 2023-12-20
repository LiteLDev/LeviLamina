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
    // symbol: ?createSystem@SendPassengerJumpPacketSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
