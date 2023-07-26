#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnderDragonFlag {

public:
    // prevent constructor by default
    EnderDragonFlag& operator=(EnderDragonFlag const&) = delete;
    EnderDragonFlag(EnderDragonFlag const&)            = delete;
    EnderDragonFlag()                                  = delete;
};
