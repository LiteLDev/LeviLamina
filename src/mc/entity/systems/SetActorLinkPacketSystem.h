#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct SetActorLinkPacketSystem {
public:
    // prevent constructor by default
    SetActorLinkPacketSystem& operator=(SetActorLinkPacketSystem const&);
    SetActorLinkPacketSystem(SetActorLinkPacketSystem const&);
    SetActorLinkPacketSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createPassengerSystem();

    MCAPI static ::TickingSystemWithInfo createVehicleSystem();
    // NOLINTEND
};
