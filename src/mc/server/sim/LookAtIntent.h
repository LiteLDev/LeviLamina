#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"

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
    // prevent constructor by default
    LookAtIntent& operator=(LookAtIntent const&);
    LookAtIntent(LookAtIntent const&);

public:
    // NOLINTBEGIN
    MCAPI LookAtIntent();

    MCAPI explicit LookAtIntent(std::variant<
                                struct sim::VoidLookAtIntent,
                                struct sim::LookAtPositionIntent,
                                struct sim::ContinuousLookAtPositionIntent,
                                struct sim::LookAtEntityIntent,
                                struct sim::ContinuousLookAtEntityIntent>);

    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&);

    MCAPI void finalize(class SimulatedPlayer&);

    MCAPI void reset();

    MCAPI ~LookAtIntent();

    // NOLINTEND
};

}; // namespace sim
