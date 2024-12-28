#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct SwimControlSystem {
public:
    // prevent constructor by default
    SwimControlSystem& operator=(SwimControlSystem const&);
    SwimControlSystem(SwimControlSystem const&);
    SwimControlSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
