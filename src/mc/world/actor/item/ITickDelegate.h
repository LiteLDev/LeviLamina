#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickDelegate {
public:
    // prevent constructor by default
    ITickDelegate& operator=(ITickDelegate const&);
    ITickDelegate(ITickDelegate const&);
    ITickDelegate();
};
