#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct InsideHoneyBlockSystem {
public:
    // prevent constructor by default
    InsideHoneyBlockSystem& operator=(InsideHoneyBlockSystem const&);
    InsideHoneyBlockSystem(InsideHoneyBlockSystem const&);
    InsideHoneyBlockSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createEventsSystem();
    // NOLINTEND
};
