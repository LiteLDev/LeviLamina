#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateTrackerDiff {
public:
    // prevent constructor by default
    ReplayStateTrackerDiff& operator=(ReplayStateTrackerDiff const&);
    ReplayStateTrackerDiff(ReplayStateTrackerDiff const&);
    ReplayStateTrackerDiff();
};
