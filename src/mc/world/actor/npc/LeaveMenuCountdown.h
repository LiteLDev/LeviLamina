#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NpcComponents {

struct LeaveMenuCountdown {

public:
    // prevent constructor by default
    LeaveMenuCountdown& operator=(LeaveMenuCountdown const&) = delete;
    LeaveMenuCountdown(LeaveMenuCountdown const&)            = delete;
    LeaveMenuCountdown()                                     = delete;
};

}; // namespace NpcComponents
