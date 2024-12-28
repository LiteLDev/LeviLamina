#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class LavaTravelSystem {
public:
    // prevent constructor by default
    LavaTravelSystem& operator=(LavaTravelSystem const&);
    LavaTravelSystem(LavaTravelSystem const&);
    LavaTravelSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createLavaTravelSystem();
    // NOLINTEND
};
