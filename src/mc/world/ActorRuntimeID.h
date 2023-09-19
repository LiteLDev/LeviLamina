#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    // prevent constructor by default
    ActorRuntimeID& operator=(ActorRuntimeID const&);
    ActorRuntimeID(ActorRuntimeID const&);
    ActorRuntimeID();
};
