#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct VoidBuildIntent {
public:
    // prevent constructor by default
    VoidBuildIntent& operator=(VoidBuildIntent const&);
    VoidBuildIntent(VoidBuildIntent const&);
    VoidBuildIntent();
};

} // namespace sim
