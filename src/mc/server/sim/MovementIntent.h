#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace sim { struct MoveInDirectionIntent; }
namespace sim { struct MoveToPositionIntent; }
namespace sim { struct NavigateToEntityIntent; }
namespace sim { struct NavigateToPositionsIntent; }
namespace sim { struct VoidMoveIntent; }
// clang-format on

namespace sim {

struct MovementIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd2e2e6;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementIntent& operator=(MovementIntent const&);
    MovementIntent(MovementIntent const&);
    MovementIntent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MovementIntent(::std::variant<
                                  ::sim::VoidMoveIntent,
                                  ::sim::MoveInDirectionIntent,
                                  ::sim::MoveToPositionIntent,
                                  ::sim::NavigateToPositionsIntent,
                                  ::sim::NavigateToEntityIntent> type);

    MCAPI ~MovementIntent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::variant<
                      ::sim::VoidMoveIntent,
                      ::sim::MoveInDirectionIntent,
                      ::sim::MoveToPositionIntent,
                      ::sim::NavigateToPositionsIntent,
                      ::sim::NavigateToEntityIntent> type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace sim
