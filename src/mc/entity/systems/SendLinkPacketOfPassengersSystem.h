#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendLinkPacketOfPassengersSystem {

public:
    // prevent constructor by default
    SendLinkPacketOfPassengersSystem& operator=(SendLinkPacketOfPassengersSystem const&) = delete;
    SendLinkPacketOfPassengersSystem(SendLinkPacketOfPassengersSystem const&)            = delete;
    SendLinkPacketOfPassengersSystem()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createCleanupSystem\@SendLinkPacketOfPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createSystem\@SendLinkPacketOfPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
