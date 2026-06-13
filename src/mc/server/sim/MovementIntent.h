#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"
#include "mc/server/sim/MoveInDirectionIntent.h"
#include "mc/server/sim/MoveToPositionIntent.h"
#include "mc/server/sim/NavigateToEntityIntent.h"
#include "mc/server/sim/NavigateToPositionsIntent.h"
#include "mc/server/sim/VoidMoveIntent.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct MovementIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::sim::VoidMoveIntent,
            ::sim::MoveInDirectionIntent,
            ::sim::MoveToPositionIntent,
            ::sim::NavigateToPositionsIntent,
            ::sim::NavigateToEntityIntent>>
        mType;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementIntent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MovementIntent(
        ::std::variant<
            ::sim::VoidMoveIntent,
            ::sim::MoveInDirectionIntent,
            ::sim::MoveToPositionIntent,
            ::sim::NavigateToPositionsIntent,
            ::sim::NavigateToEntityIntent> type
    );

    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);

    MCAPI ~MovementIntent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::variant<
            ::sim::VoidMoveIntent,
            ::sim::MoveInDirectionIntent,
            ::sim::MoveToPositionIntent,
            ::sim::NavigateToPositionsIntent,
            ::sim::NavigateToEntityIntent> type
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace sim
