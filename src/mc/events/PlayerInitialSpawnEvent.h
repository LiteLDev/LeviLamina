#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInitialSpawnEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINITIALSPAWNEVENT
public:
    PlayerInitialSpawnEvent& operator=(PlayerInitialSpawnEvent const&) = delete;
    PlayerInitialSpawnEvent(PlayerInitialSpawnEvent const&)            = delete;
    PlayerInitialSpawnEvent()                                          = delete;
#endif

public:
    /**
     * @symbol ??1PlayerInitialSpawnEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerInitialSpawnEvent();
};
