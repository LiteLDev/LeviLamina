#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ControlledByLocalInstanceFlag {

public:
    // prevent constructor by default
    ControlledByLocalInstanceFlag& operator=(ControlledByLocalInstanceFlag const&) = delete;
    ControlledByLocalInstanceFlag(ControlledByLocalInstanceFlag const&)            = delete;
    ControlledByLocalInstanceFlag()                                                = delete;
};
