#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct UpdateServerPlayerInputSystem {
public:
    // prevent constructor by default
    UpdateServerPlayerInputSystem& operator=(UpdateServerPlayerInputSystem const&);
    UpdateServerPlayerInputSystem(UpdateServerPlayerInputSystem const&);
    UpdateServerPlayerInputSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
