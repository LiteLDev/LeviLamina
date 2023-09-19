#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShulkerFlag {
public:
    // prevent constructor by default
    ShulkerFlag& operator=(ShulkerFlag const&);
    ShulkerFlag(ShulkerFlag const&);
    ShulkerFlag();
};
