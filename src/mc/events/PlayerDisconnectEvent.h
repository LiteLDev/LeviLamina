#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDisconnectEvent {
public:
    // prevent constructor by default
    PlayerDisconnectEvent& operator=(PlayerDisconnectEvent const&);
    PlayerDisconnectEvent(PlayerDisconnectEvent const&);
    PlayerDisconnectEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1PlayerDisconnectEvent@@QEAA@XZ
    MCAPI ~PlayerDisconnectEvent();

    // NOLINTEND
};
