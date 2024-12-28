#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationBase {
public:
    // prevent constructor by default
    ActorAnimationBase& operator=(ActorAnimationBase const&);
    ActorAnimationBase(ActorAnimationBase const&);
    ActorAnimationBase();
};
