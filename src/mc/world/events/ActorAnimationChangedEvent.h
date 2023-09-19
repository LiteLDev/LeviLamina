#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAnimationChangedEvent {
public:
    // prevent constructor by default
    ActorAnimationChangedEvent& operator=(ActorAnimationChangedEvent const&);
    ActorAnimationChangedEvent(ActorAnimationChangedEvent const&);
    ActorAnimationChangedEvent();
};
