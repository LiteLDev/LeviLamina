#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WolfFlag {

public:
    // prevent constructor by default
    WolfFlag& operator=(WolfFlag const&) = delete;
    WolfFlag(WolfFlag const&)            = delete;
    WolfFlag()                           = delete;
};
