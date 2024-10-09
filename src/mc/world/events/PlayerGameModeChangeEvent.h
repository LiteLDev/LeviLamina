#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerGameModeChangeEvent {
public:
    // prevent constructor by default
    PlayerGameModeChangeEvent& operator=(PlayerGameModeChangeEvent const&);
    PlayerGameModeChangeEvent(PlayerGameModeChangeEvent const&);
    PlayerGameModeChangeEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerGameModeChangeEvent();

    // NOLINTEND
};
