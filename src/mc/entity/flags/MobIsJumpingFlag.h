#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobIsJumpingFlag {

public:
    // prevent constructor by default
    MobIsJumpingFlag& operator=(MobIsJumpingFlag const&) = delete;
    MobIsJumpingFlag(MobIsJumpingFlag const&)            = delete;
    MobIsJumpingFlag()                                   = delete;
};
