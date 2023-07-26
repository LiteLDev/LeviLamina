#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorGameplayHandler {

public:
    // prevent constructor by default
    ActorGameplayHandler& operator=(ActorGameplayHandler const&) = delete;
    ActorGameplayHandler(ActorGameplayHandler const&)            = delete;
    ActorGameplayHandler()                                       = delete;
};
