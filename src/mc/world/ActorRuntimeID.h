#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {

public:
    // prevent constructor by default
    ActorRuntimeID& operator=(ActorRuntimeID const&) = delete;
    ActorRuntimeID(ActorRuntimeID const&)            = delete;
    ActorRuntimeID()                                 = delete;
};
