#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerShootArrowEvent {
public:
    // prevent constructor by default
    PlayerShootArrowEvent& operator=(PlayerShootArrowEvent const&);
    PlayerShootArrowEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerShootArrowEvent(struct PlayerShootArrowEvent const&);

    MCAPI ~PlayerShootArrowEvent();

    // NOLINTEND
};
