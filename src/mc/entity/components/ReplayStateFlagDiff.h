#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateFlagDiff {
public:
    // prevent constructor by default
    ReplayStateFlagDiff& operator=(ReplayStateFlagDiff const&);
    ReplayStateFlagDiff(ReplayStateFlagDiff const&);
    ReplayStateFlagDiff();
};
