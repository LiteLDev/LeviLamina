#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedFlag {
public:
    // prevent constructor by default
    ActorRemovedFlag& operator=(ActorRemovedFlag const&);
    ActorRemovedFlag(ActorRemovedFlag const&);
    ActorRemovedFlag();
};
