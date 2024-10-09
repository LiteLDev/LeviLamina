#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace AgentComponents {

class DetectObstacle {
public:
    // prevent constructor by default
    DetectObstacle& operator=(DetectObstacle const&);
    DetectObstacle(DetectObstacle const&);
    DetectObstacle();

public:
    // NOLINTBEGIN
    MCAPI static void
    setup(class AgentComponents::DetectObstacle& detect, class EntityContext& entity, ::AgentComponents::Direction dir);

    // NOLINTEND
};

}; // namespace AgentComponents
