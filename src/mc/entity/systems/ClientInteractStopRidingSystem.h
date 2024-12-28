#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ClientInteractStopRidingSystem {
public:
    // prevent constructor by default
    ClientInteractStopRidingSystem& operator=(ClientInteractStopRidingSystem const&);
    ClientInteractStopRidingSystem(ClientInteractStopRidingSystem const&);
    ClientInteractStopRidingSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
