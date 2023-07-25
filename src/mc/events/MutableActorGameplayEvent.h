#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableActorGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUTABLEACTORGAMEPLAYEVENT
public:
    MutableActorGameplayEvent& operator=(MutableActorGameplayEvent const&) = delete;
    MutableActorGameplayEvent(MutableActorGameplayEvent const&)            = delete;
    MutableActorGameplayEvent()                                            = delete;
#endif

public:
};
