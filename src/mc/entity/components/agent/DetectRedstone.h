#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/agent/Direction.h"

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
    // symbol: ?setup@DetectRedstone@AgentComponents@@SAXAEAV12@AEAVEntityContext@@W4Direction@2@@Z
    MCAPI static void
    setup(class AgentComponents::DetectRedstone&, class EntityContext& entity, ::AgentComponents::Direction dir);

    // NOLINTEND
};

}; // namespace AgentComponents
