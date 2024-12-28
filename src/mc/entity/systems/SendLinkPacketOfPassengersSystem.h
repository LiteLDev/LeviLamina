#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct SendLinkPacketOfPassengersSystem {
public:
    // prevent constructor by default
    SendLinkPacketOfPassengersSystem& operator=(SendLinkPacketOfPassengersSystem const&);
    SendLinkPacketOfPassengersSystem(SendLinkPacketOfPassengersSystem const&);
    SendLinkPacketOfPassengersSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createCleanupSystem();

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
