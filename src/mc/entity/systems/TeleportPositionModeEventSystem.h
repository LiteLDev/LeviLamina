#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportPositionModeEventSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTPOSITIONMODEEVENTSYSTEM
public:
    TeleportPositionModeEventSystem& operator=(TeleportPositionModeEventSystem const&) = delete;
    TeleportPositionModeEventSystem(TeleportPositionModeEventSystem const&)            = delete;
    TeleportPositionModeEventSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?createTeleportPositionModeEventSystem\@TeleportPositionModeEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTeleportPositionModeEventSystem();
};
