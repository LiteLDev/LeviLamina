#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStopLoadingEvent {

public:
    // prevent constructor by default
    PlayerStopLoadingEvent& operator=(PlayerStopLoadingEvent const&) = delete;
    PlayerStopLoadingEvent(PlayerStopLoadingEvent const&)            = delete;
    PlayerStopLoadingEvent()                                         = delete;
};
