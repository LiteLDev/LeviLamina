#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DolphinFlag {
public:
    // prevent constructor by default
    DolphinFlag& operator=(DolphinFlag const&);
    DolphinFlag(DolphinFlag const&);
    DolphinFlag();
};
