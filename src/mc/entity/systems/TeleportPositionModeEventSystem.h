#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportPositionModeEventSystem {

public:
    // prevent constructor by default
    TeleportPositionModeEventSystem& operator=(TeleportPositionModeEventSystem const&) = delete;
    TeleportPositionModeEventSystem(TeleportPositionModeEventSystem const&)            = delete;
    TeleportPositionModeEventSystem()                                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createTeleportPositionModeEventSystem\@TeleportPositionModeEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTeleportPositionModeEventSystem();
    // NOLINTEND
};
