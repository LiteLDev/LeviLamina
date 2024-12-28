#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RakStringCleanup {
public:
    // prevent constructor by default
    RakStringCleanup& operator=(RakStringCleanup const&);
    RakStringCleanup(RakStringCleanup const&);
    RakStringCleanup();
};
