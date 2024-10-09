#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitchFlag {
public:
    // prevent constructor by default
    WitchFlag& operator=(WitchFlag const&);
    WitchFlag(WitchFlag const&);
    WitchFlag();
};
