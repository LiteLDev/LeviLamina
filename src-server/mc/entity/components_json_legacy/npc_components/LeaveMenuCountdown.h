#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NpcComponents {

struct LeaveMenuCountdown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka63225;
    ::ll::UntypedStorage<8, 24> mUnkd386d2;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveMenuCountdown& operator=(LeaveMenuCountdown const&);
    LeaveMenuCountdown(LeaveMenuCountdown const&);
    LeaveMenuCountdown();

};

}
