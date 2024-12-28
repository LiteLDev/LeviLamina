#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class SendPassengerJumpPacketSystem {
public:
    // prevent constructor by default
    SendPassengerJumpPacketSystem& operator=(SendPassengerJumpPacketSystem const&);
    SendPassengerJumpPacketSystem(SendPassengerJumpPacketSystem const&);
    SendPassengerJumpPacketSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
