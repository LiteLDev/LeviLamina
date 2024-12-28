#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStopLoadingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3fe518;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStopLoadingEvent& operator=(PlayerStopLoadingEvent const&);
    PlayerStopLoadingEvent(PlayerStopLoadingEvent const&);
    PlayerStopLoadingEvent();
};
