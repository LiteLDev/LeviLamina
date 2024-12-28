#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct NavigateToPositionsIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8e255c;
    ::ll::UntypedStorage<8, 24> mUnk79ae8c;
    ::ll::UntypedStorage<8, 8>  mUnk70f1c2;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigateToPositionsIntent& operator=(NavigateToPositionsIntent const&);
    NavigateToPositionsIntent(NavigateToPositionsIntent const&);
    NavigateToPositionsIntent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);

    MCAPI ~NavigateToPositionsIntent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace sim
