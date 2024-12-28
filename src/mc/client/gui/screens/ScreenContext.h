#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenContext {
public:
    // prevent constructor by default
    ScreenContext& operator=(ScreenContext const&);
    ScreenContext(ScreenContext const&);
    ScreenContext();
};
