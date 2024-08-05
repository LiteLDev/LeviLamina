#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
// clang-format on

namespace sim {

struct BuildIntent {
public:
    // prevent constructor by default
    BuildIntent& operator=(BuildIntent const&);
    BuildIntent(BuildIntent const&);

public:
    // NOLINTBEGIN
    MCAPI BuildIntent();

    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&, class BlockSource&);

    MCAPI void finalize(class SimulatedPlayer&);

    MCAPI void reset();

    // NOLINTEND
};

}; // namespace sim
