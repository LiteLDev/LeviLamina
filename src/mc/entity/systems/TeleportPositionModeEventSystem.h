#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportPositionModeEventSystem {
public:
    // prevent constructor by default
    TeleportPositionModeEventSystem& operator=(TeleportPositionModeEventSystem const&);
    TeleportPositionModeEventSystem(TeleportPositionModeEventSystem const&);
    TeleportPositionModeEventSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createTeleportPositionModeEventSystem();

    // NOLINTEND
};
