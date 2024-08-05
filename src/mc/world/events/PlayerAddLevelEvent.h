#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddLevelEvent {
public:
    // prevent constructor by default
    PlayerAddLevelEvent& operator=(PlayerAddLevelEvent const&);
    PlayerAddLevelEvent(PlayerAddLevelEvent const&);
    PlayerAddLevelEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerAddLevelEvent();

    // NOLINTEND
};
