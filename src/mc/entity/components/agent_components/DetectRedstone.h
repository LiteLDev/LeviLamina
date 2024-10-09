#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace AgentComponents {

class DetectRedstone {
public:
    // prevent constructor by default
    DetectRedstone& operator=(DetectRedstone const&);
    DetectRedstone(DetectRedstone const&);
    DetectRedstone();

public:
    // NOLINTBEGIN
    MCAPI static void
    setup(class AgentComponents::DetectRedstone& detect, class EntityContext& entity, ::AgentComponents::Direction dir);

    // NOLINTEND
};

}; // namespace AgentComponents
