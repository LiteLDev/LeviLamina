#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTickedFlag {

public:
    // prevent constructor by default
    ActorTickedFlag& operator=(ActorTickedFlag const&) = delete;
    ActorTickedFlag(ActorTickedFlag const&)            = delete;
    ActorTickedFlag()                                  = delete;
};
