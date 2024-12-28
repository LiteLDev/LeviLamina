#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Agent {
public:
    // Agent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // Agent inner types define
    class Definition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();
    };

public:
    // prevent constructor by default
    Agent& operator=(Agent const&);
    Agent(Agent const&);
    Agent();
};

} // namespace AgentComponents
