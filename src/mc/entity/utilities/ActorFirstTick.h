#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorFirstTick {

public:
    // prevent constructor by default
    ActorFirstTick& operator=(ActorFirstTick const&) = delete;
    ActorFirstTick(ActorFirstTick const&)            = delete;
    ActorFirstTick()                                 = delete;
};
