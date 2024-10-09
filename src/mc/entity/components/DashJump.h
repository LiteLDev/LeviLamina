#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DashJump {
public:
    // prevent constructor by default
    DashJump& operator=(DashJump const&);
    DashJump(DashJump const&);
    DashJump();
};
