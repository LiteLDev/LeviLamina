#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct FlagPassengerRemovalSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createDeferredSystem();

    MCAPI static ::TickingSystemWithInfo createImmediateSystem();
    // NOLINTEND
};
