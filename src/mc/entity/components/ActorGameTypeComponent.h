#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorGameTypeComponent {

public:
    // prevent constructor by default
    ActorGameTypeComponent& operator=(ActorGameTypeComponent const&) = delete;
    ActorGameTypeComponent(ActorGameTypeComponent const&)            = delete;
    ActorGameTypeComponent()                                         = delete;
};
