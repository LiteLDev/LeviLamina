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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
