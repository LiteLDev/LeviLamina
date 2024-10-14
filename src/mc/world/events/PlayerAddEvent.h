#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddEvent {
public:
    // prevent constructor by default
    PlayerAddEvent& operator=(PlayerAddEvent const&);
    PlayerAddEvent(PlayerAddEvent const&);
    PlayerAddEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerAddEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
