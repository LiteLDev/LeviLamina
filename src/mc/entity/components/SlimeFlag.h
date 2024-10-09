#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlimeFlag {
public:
    // prevent constructor by default
    SlimeFlag& operator=(SlimeFlag const&);
    SlimeFlag(SlimeFlag const&);
    SlimeFlag();
};
