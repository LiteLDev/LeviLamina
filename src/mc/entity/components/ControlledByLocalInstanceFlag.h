#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ControlledByLocalInstanceFlag {
public:
    // prevent constructor by default
    ControlledByLocalInstanceFlag& operator=(ControlledByLocalInstanceFlag const&);
    ControlledByLocalInstanceFlag(ControlledByLocalInstanceFlag const&);
    ControlledByLocalInstanceFlag();
};
