#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerJumpRequestFlag {
public:
    // prevent constructor by default
    LocalPlayerJumpRequestFlag& operator=(LocalPlayerJumpRequestFlag const&);
    LocalPlayerJumpRequestFlag(LocalPlayerJumpRequestFlag const&);
    LocalPlayerJumpRequestFlag();
};
