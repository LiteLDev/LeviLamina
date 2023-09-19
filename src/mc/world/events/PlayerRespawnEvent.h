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
    // symbol: ??1PlayerRespawnEvent@@QEAA@XZ
    MCAPI ~PlayerRespawnEvent();

    // NOLINTEND
};
