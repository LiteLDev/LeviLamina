#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDimensionChangeBeforeEvent {
public:
    // prevent constructor by default
    PlayerDimensionChangeBeforeEvent& operator=(PlayerDimensionChangeBeforeEvent const&);
    PlayerDimensionChangeBeforeEvent(PlayerDimensionChangeBeforeEvent const&);
    PlayerDimensionChangeBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerDimensionChangeBeforeEvent();

    // NOLINTEND
};
