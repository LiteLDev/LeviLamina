#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ReplayStateFlagDiff {
public:
    // prevent constructor by default
    ReplayStateFlagDiff& operator=(ReplayStateFlagDiff const&);
    ReplayStateFlagDiff(ReplayStateFlagDiff const&);
    ReplayStateFlagDiff();
};
