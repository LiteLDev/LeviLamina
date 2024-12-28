#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class UpdateAISystem {
public:
    // prevent constructor by default
    UpdateAISystem& operator=(UpdateAISystem const&);
    UpdateAISystem(UpdateAISystem const&);
    UpdateAISystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
