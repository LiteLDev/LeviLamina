#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetActorLinkPacketSystem {

public:
    // prevent constructor by default
    SetActorLinkPacketSystem& operator=(SetActorLinkPacketSystem const&) = delete;
    SetActorLinkPacketSystem(SetActorLinkPacketSystem const&)            = delete;
    SetActorLinkPacketSystem()                                           = delete;

public:
    /**
     * @symbol ?createSetActorLinkPacketSystem\@SetActorLinkPacketSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetActorLinkPacketSystem(); // NOLINT
};
