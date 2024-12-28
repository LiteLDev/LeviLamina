#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenInputContext {
public:
    // prevent constructor by default
    ScreenInputContext& operator=(ScreenInputContext const&);
    ScreenInputContext(ScreenInputContext const&);
    ScreenInputContext();
};
