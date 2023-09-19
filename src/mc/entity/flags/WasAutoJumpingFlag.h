#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasAutoJumpingFlag {
public:
    // prevent constructor by default
    WasAutoJumpingFlag& operator=(WasAutoJumpingFlag const&);
    WasAutoJumpingFlag(WasAutoJumpingFlag const&);
    WasAutoJumpingFlag();
};
