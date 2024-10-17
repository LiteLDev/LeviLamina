#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractEvent {
public:
    // prevent constructor by default
    PlayerInteractEvent& operator=(PlayerInteractEvent const&);
    PlayerInteractEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractEvent(struct PlayerInteractEvent const&);

    MCAPI ~PlayerInteractEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct PlayerInteractEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
