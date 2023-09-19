#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ActorGameplayEvent {
public:
    // prevent constructor by default
    ActorGameplayEvent& operator=(ActorGameplayEvent const&);
    ActorGameplayEvent(ActorGameplayEvent const&);
    ActorGameplayEvent();
};
