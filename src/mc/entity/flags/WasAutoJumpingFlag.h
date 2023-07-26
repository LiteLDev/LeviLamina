#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasAutoJumpingFlag {

public:
    // prevent constructor by default
    WasAutoJumpingFlag& operator=(WasAutoJumpingFlag const&) = delete;
    WasAutoJumpingFlag(WasAutoJumpingFlag const&)            = delete;
    WasAutoJumpingFlag()                                     = delete;
};
