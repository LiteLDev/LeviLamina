#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FreezeImmuneFlag {
public:
    // prevent constructor by default
    FreezeImmuneFlag& operator=(FreezeImmuneFlag const&);
    FreezeImmuneFlag(FreezeImmuneFlag const&);
    FreezeImmuneFlag();
};
