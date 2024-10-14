#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDropItemEvent {
public:
    // prevent constructor by default
    PlayerDropItemEvent& operator=(PlayerDropItemEvent const&);
    PlayerDropItemEvent(PlayerDropItemEvent const&);
    PlayerDropItemEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerDropItemEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
