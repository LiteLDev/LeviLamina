#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Turn {
public:
    // prevent constructor by default
    Turn& operator=(Turn const&);
    Turn(Turn const&);
    Turn();
};

}; // namespace AgentComponents::Actions
