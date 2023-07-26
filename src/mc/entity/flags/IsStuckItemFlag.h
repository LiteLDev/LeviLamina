#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsStuckItemFlag {

public:
    // prevent constructor by default
    IsStuckItemFlag& operator=(IsStuckItemFlag const&) = delete;
    IsStuckItemFlag(IsStuckItemFlag const&)            = delete;
    IsStuckItemFlag()                                  = delete;
};
