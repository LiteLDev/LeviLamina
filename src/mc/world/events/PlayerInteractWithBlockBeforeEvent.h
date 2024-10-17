#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithBlockBeforeEvent {
public:
    // prevent constructor by default
    PlayerInteractWithBlockBeforeEvent& operator=(PlayerInteractWithBlockBeforeEvent const&);
    PlayerInteractWithBlockBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithBlockBeforeEvent(struct PlayerInteractWithBlockBeforeEvent const&);

    MCAPI ~PlayerInteractWithBlockBeforeEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct PlayerInteractWithBlockBeforeEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
