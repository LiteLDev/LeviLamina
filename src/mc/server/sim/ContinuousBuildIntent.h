#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct ContinuousBuildIntent {
public:
    // prevent constructor by default
    ContinuousBuildIntent& operator=(ContinuousBuildIntent const&);
    ContinuousBuildIntent(ContinuousBuildIntent const&);
    ContinuousBuildIntent();
};

} // namespace sim
