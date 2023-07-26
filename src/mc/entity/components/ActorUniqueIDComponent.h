#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueIDComponent {

public:
    // prevent constructor by default
    ActorUniqueIDComponent& operator=(ActorUniqueIDComponent const&) = delete;
    ActorUniqueIDComponent(ActorUniqueIDComponent const&)            = delete;
    ActorUniqueIDComponent()                                         = delete;
};
