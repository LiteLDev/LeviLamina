#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddedFlag {

public:
    // prevent constructor by default
    ActorAddedFlag& operator=(ActorAddedFlag const&) = delete;
    ActorAddedFlag(ActorAddedFlag const&)            = delete;
    ActorAddedFlag()                                 = delete;
};
