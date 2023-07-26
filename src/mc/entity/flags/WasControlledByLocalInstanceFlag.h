#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasControlledByLocalInstanceFlag {

public:
    // prevent constructor by default
    WasControlledByLocalInstanceFlag& operator=(WasControlledByLocalInstanceFlag const&) = delete;
    WasControlledByLocalInstanceFlag(WasControlledByLocalInstanceFlag const&)            = delete;
    WasControlledByLocalInstanceFlag()                                                   = delete;
};
