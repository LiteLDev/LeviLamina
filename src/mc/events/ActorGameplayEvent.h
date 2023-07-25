#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ActorGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORGAMEPLAYEVENT
public:
    ActorGameplayEvent& operator=(ActorGameplayEvent const&) = delete;
    ActorGameplayEvent(ActorGameplayEvent const&)            = delete;
    ActorGameplayEvent()                                     = delete;
#endif

public:
};
