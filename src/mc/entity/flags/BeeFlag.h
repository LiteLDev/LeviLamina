#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeeFlag {

public:
    // prevent constructor by default
    BeeFlag& operator=(BeeFlag const&) = delete;
    BeeFlag(BeeFlag const&)            = delete;
    BeeFlag()                          = delete;
};
