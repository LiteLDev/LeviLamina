#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableItemGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUTABLEITEMGAMEPLAYEVENT
public:
    MutableItemGameplayEvent& operator=(MutableItemGameplayEvent const&) = delete;
    MutableItemGameplayEvent(MutableItemGameplayEvent const&)            = delete;
    MutableItemGameplayEvent()                                           = delete;
#endif

public:
};
