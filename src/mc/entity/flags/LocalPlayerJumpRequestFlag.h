#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerJumpRequestFlag {

public:
    // prevent constructor by default
    LocalPlayerJumpRequestFlag& operator=(LocalPlayerJumpRequestFlag const&) = delete;
    LocalPlayerJumpRequestFlag(LocalPlayerJumpRequestFlag const&)            = delete;
    LocalPlayerJumpRequestFlag()                                             = delete;
};
