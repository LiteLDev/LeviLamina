#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsStuckInColliderFlag {
public:
    // prevent constructor by default
    IsStuckInColliderFlag& operator=(IsStuckInColliderFlag const&);
    IsStuckInColliderFlag(IsStuckInColliderFlag const&);
    IsStuckInColliderFlag();
};
