#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDestroyBlockEvent {
public:
    // prevent constructor by default
    PlayerDestroyBlockEvent& operator=(PlayerDestroyBlockEvent const&);
    PlayerDestroyBlockEvent(PlayerDestroyBlockEvent const&);
    PlayerDestroyBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerDestroyBlockEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
