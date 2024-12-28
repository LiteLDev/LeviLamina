#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct InsideGenericBlockSystem {
public:
    // prevent constructor by default
    InsideGenericBlockSystem& operator=(InsideGenericBlockSystem const&);
    InsideGenericBlockSystem(InsideGenericBlockSystem const&);
    InsideGenericBlockSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
