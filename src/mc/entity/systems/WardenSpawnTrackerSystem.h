#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WardenSpawnTrackerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENSPAWNTRACKERSYSTEM
public:
    WardenSpawnTrackerSystem& operator=(WardenSpawnTrackerSystem const&) = delete;
    WardenSpawnTrackerSystem(WardenSpawnTrackerSystem const&)            = delete;
    WardenSpawnTrackerSystem()                                           = delete;
#endif

public:
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
};
