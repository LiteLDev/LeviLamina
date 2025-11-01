#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> totalTime;
    ::ll::TypedStorage<4, 4, int> lastChange;
    // NOLINTEND

};
