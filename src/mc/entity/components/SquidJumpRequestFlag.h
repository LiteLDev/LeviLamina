#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SquidJumpRequestFlag {
public:
    // prevent constructor by default
    SquidJumpRequestFlag& operator=(SquidJumpRequestFlag const&);
    SquidJumpRequestFlag(SquidJumpRequestFlag const&);
    SquidJumpRequestFlag();
};
