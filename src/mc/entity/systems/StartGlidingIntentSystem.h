#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct StartGlidingIntentSystem {
public:
    // prevent constructor by default
    StartGlidingIntentSystem& operator=(StartGlidingIntentSystem const&);
    StartGlidingIntentSystem(StartGlidingIntentSystem const&);
    StartGlidingIntentSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
