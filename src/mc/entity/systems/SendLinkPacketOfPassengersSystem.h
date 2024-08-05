#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendLinkPacketOfPassengersSystem {
public:
    // prevent constructor by default
    SendLinkPacketOfPassengersSystem& operator=(SendLinkPacketOfPassengersSystem const&);
    SendLinkPacketOfPassengersSystem(SendLinkPacketOfPassengersSystem const&);
    SendLinkPacketOfPassengersSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
