#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct StopGlidingIntentSystem {
public:
    // prevent constructor by default
    StopGlidingIntentSystem& operator=(StopGlidingIntentSystem const&);
    StopGlidingIntentSystem(StopGlidingIntentSystem const&);
    StopGlidingIntentSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
