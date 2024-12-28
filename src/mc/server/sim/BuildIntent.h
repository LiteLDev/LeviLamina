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

struct BuildIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk702cc9;
    // NOLINTEND

public:
    // prevent constructor by default
    BuildIntent& operator=(BuildIntent const&);
    BuildIntent(BuildIntent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuildIntent();

    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player, ::BlockSource& region);

    MCAPI void finalize(::SimulatedPlayer& player);

    MCAPI void reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace sim
