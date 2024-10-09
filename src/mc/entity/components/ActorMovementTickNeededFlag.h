#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorMovementTickNeededFlag {
public:
    // prevent constructor by default
    ActorMovementTickNeededFlag& operator=(ActorMovementTickNeededFlag const&);
    ActorMovementTickNeededFlag(ActorMovementTickNeededFlag const&);
    ActorMovementTickNeededFlag();
};
