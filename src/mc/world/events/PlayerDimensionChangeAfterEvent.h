#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDimensionChangeAfterEvent {
public:
    // prevent constructor by default
    PlayerDimensionChangeAfterEvent& operator=(PlayerDimensionChangeAfterEvent const&);
    PlayerDimensionChangeAfterEvent(PlayerDimensionChangeAfterEvent const&);
    PlayerDimensionChangeAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerDimensionChangeAfterEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
