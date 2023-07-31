#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WardenSpawnTrackerSystem {

public:
    // prevent constructor by default
    WardenSpawnTrackerSystem& operator=(WardenSpawnTrackerSystem const&) = delete;
    WardenSpawnTrackerSystem(WardenSpawnTrackerSystem const&)            = delete;
    WardenSpawnTrackerSystem()                                           = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WARDENSPAWNTRACKERSYSTEM
    /**
     * @symbol ?onLevelAddedPlayer\@WardenSpawnTrackerSystem\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelAddedPlayer(class Level&, class Player&);
    /**
     * @symbol ?tick\@WardenSpawnTrackerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCVAPI void tick(class EntityRegistry&);
#endif
    // NOLINTEND
};
