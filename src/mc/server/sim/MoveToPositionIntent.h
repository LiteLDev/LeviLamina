#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct MoveToPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk77b486;
    ::ll::UntypedStorage<1, 1>  mUnk6c38c9;
    ::ll::UntypedStorage<4, 4>  mUnk19474d;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToPositionIntent& operator=(MoveToPositionIntent const&);
    MoveToPositionIntent(MoveToPositionIntent const&);
    MoveToPositionIntent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);
    // NOLINTEND
};

} // namespace sim
