#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct NavigateToEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf79d15;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigateToEntityIntent& operator=(NavigateToEntityIntent const&);
    NavigateToEntityIntent(NavigateToEntityIntent const&);
    NavigateToEntityIntent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);
    // NOLINTEND
};

} // namespace sim
