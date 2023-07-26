#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DashCooldownTimerComponent {

public:
    // prevent constructor by default
    DashCooldownTimerComponent& operator=(DashCooldownTimerComponent const&) = delete;
    DashCooldownTimerComponent(DashCooldownTimerComponent const&)            = delete;
    DashCooldownTimerComponent()                                             = delete;
};
