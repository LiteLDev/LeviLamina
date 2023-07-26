#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DashJump {

public:
    // prevent constructor by default
    DashJump& operator=(DashJump const&) = delete;
    DashJump(DashJump const&)            = delete;
    DashJump()                           = delete;
};
