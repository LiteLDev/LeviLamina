#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BatFlag {
public:
    // prevent constructor by default
    BatFlag& operator=(BatFlag const&);
    BatFlag(BatFlag const&);
    BatFlag();
};
