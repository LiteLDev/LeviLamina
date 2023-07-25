#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct PlayerGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERGAMEPLAYEVENT
public:
    PlayerGameplayEvent& operator=(PlayerGameplayEvent const&) = delete;
    PlayerGameplayEvent(PlayerGameplayEvent const&)            = delete;
    PlayerGameplayEvent()                                      = delete;
#endif

public:
};
