#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddedFlag {
public:
    // prevent constructor by default
    ActorAddedFlag& operator=(ActorAddedFlag const&);
    ActorAddedFlag(ActorAddedFlag const&);
    ActorAddedFlag();
};
