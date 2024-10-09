#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableActorGameplayEvent {
public:
    // prevent constructor by default
    MutableActorGameplayEvent& operator=(MutableActorGameplayEvent const&);
    MutableActorGameplayEvent(MutableActorGameplayEvent const&);
    MutableActorGameplayEvent();
};
