#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct StopGlidingActionSystem {
public:
    // prevent constructor by default
    StopGlidingActionSystem& operator=(StopGlidingActionSystem const&);
    StopGlidingActionSystem(StopGlidingActionSystem const&);
    StopGlidingActionSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);
    // NOLINTEND
};
