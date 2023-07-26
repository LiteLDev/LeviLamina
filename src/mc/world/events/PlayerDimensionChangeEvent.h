#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDimensionChangeEvent {

public:
    // prevent constructor by default
    PlayerDimensionChangeEvent& operator=(PlayerDimensionChangeEvent const&) = delete;
    PlayerDimensionChangeEvent(PlayerDimensionChangeEvent const&)            = delete;
    PlayerDimensionChangeEvent()                                             = delete;
};
