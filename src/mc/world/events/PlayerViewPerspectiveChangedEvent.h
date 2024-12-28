#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerViewPerspectiveChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4c4baf;
    ::ll::UntypedStorage<4, 4> mUnk306f4e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerViewPerspectiveChangedEvent& operator=(PlayerViewPerspectiveChangedEvent const&);
    PlayerViewPerspectiveChangedEvent(PlayerViewPerspectiveChangedEvent const&);
    PlayerViewPerspectiveChangedEvent();
};
