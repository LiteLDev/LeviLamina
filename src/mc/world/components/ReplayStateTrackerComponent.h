#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateTrackerComponent {
public:
    // prevent constructor by default
    ReplayStateTrackerComponent& operator=(ReplayStateTrackerComponent const&);
    ReplayStateTrackerComponent(ReplayStateTrackerComponent const&);
    ReplayStateTrackerComponent();
};
