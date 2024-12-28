#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class ScaffoldingIntentSystem {
public:
    // prevent constructor by default
    ScaffoldingIntentSystem& operator=(ScaffoldingIntentSystem const&);
    ScaffoldingIntentSystem(ScaffoldingIntentSystem const&);
    ScaffoldingIntentSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
