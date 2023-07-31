#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInitialSpawnEvent {

public:
    // prevent constructor by default
    PlayerInitialSpawnEvent& operator=(PlayerInitialSpawnEvent const&) = delete;
    PlayerInitialSpawnEvent(PlayerInitialSpawnEvent const&)            = delete;
    PlayerInitialSpawnEvent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1PlayerInitialSpawnEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerInitialSpawnEvent();
    // NOLINTEND
};
