#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PostEntityDismountGameEventSystem {
public:
    // prevent constructor by default
    PostEntityDismountGameEventSystem& operator=(PostEntityDismountGameEventSystem const&);
    PostEntityDismountGameEventSystem(PostEntityDismountGameEventSystem const&);
    PostEntityDismountGameEventSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PostEntityDismountGameEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
