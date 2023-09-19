#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RaidTriggerFlag {
public:
    // prevent constructor by default
    RaidTriggerFlag& operator=(RaidTriggerFlag const&);
    RaidTriggerFlag(RaidTriggerFlag const&);
    RaidTriggerFlag();
};
