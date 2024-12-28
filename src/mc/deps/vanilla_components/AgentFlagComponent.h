#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AgentFlagComponent {
public:
    // prevent constructor by default
    AgentFlagComponent& operator=(AgentFlagComponent const&);
    AgentFlagComponent(AgentFlagComponent const&);
    AgentFlagComponent();
};
