#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
// clang-format on

namespace sim {

struct ContinuousBuildIntent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player, ::BlockSource& region);
    // NOLINTEND
};

} // namespace sim
