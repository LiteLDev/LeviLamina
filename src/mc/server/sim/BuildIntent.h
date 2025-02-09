#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
namespace sim { struct ContinuousBuildIntent; }
namespace sim { struct VoidBuildIntent; }
// clang-format on

namespace sim {

struct BuildIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::variant<::sim::VoidBuildIntent, ::sim::ContinuousBuildIntent>> mType;
    // NOLINTEND

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
