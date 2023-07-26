#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FreezeImmuneFlag {

public:
    // prevent constructor by default
    FreezeImmuneFlag& operator=(FreezeImmuneFlag const&) = delete;
    FreezeImmuneFlag(FreezeImmuneFlag const&)            = delete;
    FreezeImmuneFlag()                                   = delete;
};
