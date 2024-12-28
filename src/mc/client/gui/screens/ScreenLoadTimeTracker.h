#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenLoadTimeTracker {
public:
    // prevent constructor by default
    ScreenLoadTimeTracker& operator=(ScreenLoadTimeTracker const&);
    ScreenLoadTimeTracker(ScreenLoadTimeTracker const&);
    ScreenLoadTimeTracker();
};
