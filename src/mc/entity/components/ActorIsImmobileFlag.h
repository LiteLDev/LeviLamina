#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorIsImmobileFlag {
public:
    // prevent constructor by default
    ActorIsImmobileFlag& operator=(ActorIsImmobileFlag const&);
    ActorIsImmobileFlag(ActorIsImmobileFlag const&);
    ActorIsImmobileFlag();
};
