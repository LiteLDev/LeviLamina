#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FallingBlockFlag {

public:
    // prevent constructor by default
    FallingBlockFlag& operator=(FallingBlockFlag const&) = delete;
    FallingBlockFlag(FallingBlockFlag const&)            = delete;
    FallingBlockFlag()                                   = delete;
};
