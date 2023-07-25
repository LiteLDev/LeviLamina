#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableBlockGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUTABLEBLOCKGAMEPLAYEVENT
public:
    MutableBlockGameplayEvent& operator=(MutableBlockGameplayEvent const&) = delete;
    MutableBlockGameplayEvent(MutableBlockGameplayEvent const&)            = delete;
    MutableBlockGameplayEvent()                                            = delete;
#endif

public:
};
