#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct SendPacketsSystem {
public:
    // prevent constructor by default
    SendPacketsSystem& operator=(SendPacketsSystem const&);
    SendPacketsSystem(SendPacketsSystem const&);
    SendPacketsSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSendPacketsSystem();
    // NOLINTEND
};
