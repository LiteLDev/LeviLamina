#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnGroundFlag {
public:
    // prevent constructor by default
    OnGroundFlag& operator=(OnGroundFlag const&);
    OnGroundFlag(OnGroundFlag const&);
    OnGroundFlag();
};
