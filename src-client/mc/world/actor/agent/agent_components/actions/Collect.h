#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/CollectionSpecification.h"

namespace AgentComponents::Actions {

struct Collect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::CollectionSpecification> spec;
    ::ll::TypedStorage<4, 4, int>                                        itemId;
    // NOLINTEND
};

} // namespace AgentComponents::Actions
