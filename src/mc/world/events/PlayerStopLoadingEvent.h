#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStopLoadingEvent {
public:
    // prevent constructor by default
    PlayerStopLoadingEvent& operator=(PlayerStopLoadingEvent const&);
    PlayerStopLoadingEvent(PlayerStopLoadingEvent const&);
    PlayerStopLoadingEvent();
};
