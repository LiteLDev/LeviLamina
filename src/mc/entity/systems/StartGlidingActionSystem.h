#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct StartGlidingActionSystem {
public:
    // prevent constructor by default
    StartGlidingActionSystem& operator=(StartGlidingActionSystem const&);
    StartGlidingActionSystem(StartGlidingActionSystem const&);
    StartGlidingActionSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);
    // NOLINTEND
};
