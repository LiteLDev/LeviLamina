#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFormResponseEvent {
public:
    // prevent constructor by default
    PlayerFormResponseEvent& operator=(PlayerFormResponseEvent const&);
    PlayerFormResponseEvent(PlayerFormResponseEvent const&);
    PlayerFormResponseEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerFormResponseEvent();

    // NOLINTEND
};
