#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

namespace AgentComponents::Actions {

struct Drop {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
    ::ll::TypedStorage<4, 4, int>                          slot;
    ::ll::TypedStorage<4, 4, int>                          quantity;
    // NOLINTEND
};

} // namespace AgentComponents::Actions
