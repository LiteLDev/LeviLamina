#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorStatusProvider {

public:
    // prevent constructor by default
    ActorStatusProvider& operator=(ActorStatusProvider const&) = delete;
    ActorStatusProvider(ActorStatusProvider const&)            = delete;
    ActorStatusProvider()                                      = delete;
};
