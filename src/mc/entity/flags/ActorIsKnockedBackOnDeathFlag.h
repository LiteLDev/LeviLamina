#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorIsKnockedBackOnDeathFlag {

public:
    // prevent constructor by default
    ActorIsKnockedBackOnDeathFlag& operator=(ActorIsKnockedBackOnDeathFlag const&) = delete;
    ActorIsKnockedBackOnDeathFlag(ActorIsKnockedBackOnDeathFlag const&)            = delete;
    ActorIsKnockedBackOnDeathFlag()                                                = delete;
};
