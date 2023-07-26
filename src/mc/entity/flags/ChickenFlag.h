#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChickenFlag {

public:
    // prevent constructor by default
    ChickenFlag& operator=(ChickenFlag const&) = delete;
    ChickenFlag(ChickenFlag const&)            = delete;
    ChickenFlag()                              = delete;
};
