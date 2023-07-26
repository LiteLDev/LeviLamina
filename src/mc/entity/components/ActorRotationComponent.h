#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRotationComponent {

public:
    // prevent constructor by default
    ActorRotationComponent& operator=(ActorRotationComponent const&) = delete;
    ActorRotationComponent(ActorRotationComponent const&)            = delete;
    ActorRotationComponent()                                         = delete;
};
