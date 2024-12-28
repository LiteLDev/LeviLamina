#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct InsideWaterlilyBlockSystem {
public:
    // prevent constructor by default
    InsideWaterlilyBlockSystem& operator=(InsideWaterlilyBlockSystem const&);
    InsideWaterlilyBlockSystem(InsideWaterlilyBlockSystem const&);
    InsideWaterlilyBlockSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createDestroyWaterlilySystem();
    // NOLINTEND
};
