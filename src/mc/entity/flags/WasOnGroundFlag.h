#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasOnGroundFlag {

public:
    // prevent constructor by default
    WasOnGroundFlag& operator=(WasOnGroundFlag const&) = delete;
    WasOnGroundFlag(WasOnGroundFlag const&)            = delete;
    WasOnGroundFlag()                                  = delete;
};
