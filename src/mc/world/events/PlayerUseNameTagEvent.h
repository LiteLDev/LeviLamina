#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUseNameTagEvent {
public:
    // prevent constructor by default
    PlayerUseNameTagEvent& operator=(PlayerUseNameTagEvent const&);
    PlayerUseNameTagEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerUseNameTagEvent(struct PlayerUseNameTagEvent const&);

    MCAPI ~PlayerUseNameTagEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct PlayerUseNameTagEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
