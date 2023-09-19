#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBackgroundTaskOwner {
public:
    // prevent constructor by default
    IBackgroundTaskOwner& operator=(IBackgroundTaskOwner const&);
    IBackgroundTaskOwner(IBackgroundTaskOwner const&);
    IBackgroundTaskOwner();
};
