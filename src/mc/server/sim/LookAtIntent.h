#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
namespace sim { struct ContinuousLookAtEntityIntent; }
namespace sim { struct ContinuousLookAtPositionIntent; }
namespace sim { struct LookAtEntityIntent; }
namespace sim { struct LookAtPositionIntent; }
namespace sim { struct VoidLookAtIntent; }
// clang-format on

namespace sim {

struct LookAtIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::sim::VoidLookAtIntent,
            ::sim::LookAtPositionIntent,
            ::sim::ContinuousLookAtPositionIntent,
            ::sim::LookAtEntityIntent,
            ::sim::ContinuousLookAtEntityIntent>>
        mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LookAtIntent();

    MCAPI explicit LookAtIntent(::std::variant<
                                ::sim::VoidLookAtIntent,
                                ::sim::LookAtPositionIntent,
                                ::sim::ContinuousLookAtPositionIntent,
                                ::sim::LookAtEntityIntent,
                                ::sim::ContinuousLookAtEntityIntent> type);

    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);

    MCAPI void finalize(::SimulatedPlayer& player);

    MCAPI void reset();

    MCAPI ~LookAtIntent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::variant<
                      ::sim::VoidLookAtIntent,
                      ::sim::LookAtPositionIntent,
                      ::sim::ContinuousLookAtPositionIntent,
                      ::sim::LookAtEntityIntent,
                      ::sim::ContinuousLookAtEntityIntent> type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace sim
