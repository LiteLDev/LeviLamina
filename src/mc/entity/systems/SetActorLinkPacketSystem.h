#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetActorLinkPacketSystem {
public:
    // prevent constructor by default
    SetActorLinkPacketSystem& operator=(SetActorLinkPacketSystem const&);
    SetActorLinkPacketSystem(SetActorLinkPacketSystem const&);
    SetActorLinkPacketSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createPassengerSystem();

    MCAPI static struct TickingSystemWithInfo createVehicleSystem();

    // NOLINTEND
};
