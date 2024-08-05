#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerOpenContainerEvent {
public:
    // prevent constructor by default
    PlayerOpenContainerEvent& operator=(PlayerOpenContainerEvent const&);
    PlayerOpenContainerEvent(PlayerOpenContainerEvent const&);
    PlayerOpenContainerEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerOpenContainerEvent();

    // NOLINTEND
};
