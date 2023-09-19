#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChickenFlag {
public:
    // prevent constructor by default
    ChickenFlag& operator=(ChickenFlag const&);
    ChickenFlag(ChickenFlag const&);
    ChickenFlag();
};
