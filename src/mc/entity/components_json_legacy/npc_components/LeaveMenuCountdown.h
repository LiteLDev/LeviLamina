#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

namespace NpcComponents {

struct LeaveMenuCountdown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>              ticksRemaining;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> npc;
    // NOLINTEND
};

} // namespace NpcComponents
