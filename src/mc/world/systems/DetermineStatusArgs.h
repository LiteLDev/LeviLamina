#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakTriggerSystem {

struct DetermineStatusArgs {
public:
    // prevent constructor by default
    DetermineStatusArgs& operator=(DetermineStatusArgs const&);
    DetermineStatusArgs(DetermineStatusArgs const&);
    DetermineStatusArgs();
};

}; // namespace SneakTriggerSystem
