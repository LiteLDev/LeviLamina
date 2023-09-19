#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LavaTravelFlag {
public:
    // prevent constructor by default
    LavaTravelFlag& operator=(LavaTravelFlag const&);
    LavaTravelFlag(LavaTravelFlag const&);
    LavaTravelFlag();
};
