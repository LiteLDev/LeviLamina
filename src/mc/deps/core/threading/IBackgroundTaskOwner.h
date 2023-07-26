#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBackgroundTaskOwner {

public:
    // prevent constructor by default
    IBackgroundTaskOwner& operator=(IBackgroundTaskOwner const&) = delete;
    IBackgroundTaskOwner(IBackgroundTaskOwner const&)            = delete;
    IBackgroundTaskOwner()                                       = delete;
};
