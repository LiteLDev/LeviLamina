#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddExpEvent {
public:
    // prevent constructor by default
    PlayerAddExpEvent& operator=(PlayerAddExpEvent const&);
    PlayerAddExpEvent(PlayerAddExpEvent const&);
    PlayerAddExpEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerAddExpEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
