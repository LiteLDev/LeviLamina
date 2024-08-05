#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerRespawnEvent {
public:
    // prevent constructor by default
    PlayerRespawnEvent& operator=(PlayerRespawnEvent const&);
    PlayerRespawnEvent(PlayerRespawnEvent const&);
    PlayerRespawnEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerRespawnEvent();

    // NOLINTEND
};
