#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorIsImmobileFlag {

public:
    // prevent constructor by default
    ActorIsImmobileFlag& operator=(ActorIsImmobileFlag const&) = delete;
    ActorIsImmobileFlag(ActorIsImmobileFlag const&)            = delete;
    ActorIsImmobileFlag()                                      = delete;
};
