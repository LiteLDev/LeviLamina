#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShulkerFlag {

public:
    // prevent constructor by default
    ShulkerFlag& operator=(ShulkerFlag const&) = delete;
    ShulkerFlag(ShulkerFlag const&)            = delete;
    ShulkerFlag()                              = delete;
};
