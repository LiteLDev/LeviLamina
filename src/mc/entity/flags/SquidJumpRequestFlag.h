#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SquidJumpRequestFlag {

public:
    // prevent constructor by default
    SquidJumpRequestFlag& operator=(SquidJumpRequestFlag const&) = delete;
    SquidJumpRequestFlag(SquidJumpRequestFlag const&)            = delete;
    SquidJumpRequestFlag()                                       = delete;
};
