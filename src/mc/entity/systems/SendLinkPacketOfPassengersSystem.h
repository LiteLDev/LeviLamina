#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendLinkPacketOfPassengersSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDLINKPACKETOFPASSENGERSSYSTEM
public:
    SendLinkPacketOfPassengersSystem& operator=(SendLinkPacketOfPassengersSystem const&) = delete;
    SendLinkPacketOfPassengersSystem(SendLinkPacketOfPassengersSystem const&)            = delete;
    SendLinkPacketOfPassengersSystem()                                                   = delete;
#endif

public:
    /**
     * @symbol ?createCleanupSystem\@SendLinkPacketOfPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createSystem\@SendLinkPacketOfPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
