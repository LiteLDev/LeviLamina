#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetActorLinkPacketSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORLINKPACKETSYSTEM
public:
    SetActorLinkPacketSystem& operator=(SetActorLinkPacketSystem const&) = delete;
    SetActorLinkPacketSystem(SetActorLinkPacketSystem const&)            = delete;
    SetActorLinkPacketSystem()                                           = delete;
#endif

public:
    /**
     * @symbol ?createSetActorLinkPacketSystem\@SetActorLinkPacketSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetActorLinkPacketSystem();
};
