#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/agent/Direction.h"

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
    // symbol: ?setup@DetectObstacle@AgentComponents@@SAXAEAV12@AEAVEntityContext@@W4Direction@2@@Z
    MCAPI static void
    setup(class AgentComponents::DetectObstacle&, class EntityContext& entity, ::AgentComponents::Direction dir);

    // NOLINTEND
};

}; // namespace AgentComponents
