#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStopLoadingEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSTOPLOADINGEVENT
public:
    PlayerStopLoadingEvent& operator=(PlayerStopLoadingEvent const&) = delete;
    PlayerStopLoadingEvent(PlayerStopLoadingEvent const&)            = delete;
    PlayerStopLoadingEvent()                                         = delete;
#endif

public:
};
