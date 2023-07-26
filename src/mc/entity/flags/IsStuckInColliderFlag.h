#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsStuckInColliderFlag {

public:
    // prevent constructor by default
    IsStuckInColliderFlag& operator=(IsStuckInColliderFlag const&) = delete;
    IsStuckInColliderFlag(IsStuckInColliderFlag const&)            = delete;
    IsStuckInColliderFlag()                                        = delete;
};
