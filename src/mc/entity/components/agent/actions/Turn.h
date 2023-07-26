#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Turn {

public:
    // prevent constructor by default
    Turn& operator=(Turn const&) = delete;
    Turn(Turn const&)            = delete;
    Turn()                       = delete;
};

}; // namespace AgentComponents::Actions
