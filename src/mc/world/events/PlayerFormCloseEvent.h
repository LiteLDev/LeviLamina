#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFormCloseEvent {
public:
    // prevent constructor by default
    PlayerFormCloseEvent& operator=(PlayerFormCloseEvent const&);
    PlayerFormCloseEvent(PlayerFormCloseEvent const&);
    PlayerFormCloseEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerFormCloseEvent();

    // NOLINTEND
};
