#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelAddedActorEvent {

public:
    // prevent constructor by default
    LevelAddedActorEvent& operator=(LevelAddedActorEvent const&) = delete;
    LevelAddedActorEvent(LevelAddedActorEvent const&)            = delete;
    LevelAddedActorEvent()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1LevelAddedActorEvent\@\@QEAA\@XZ
     */
    MCAPI ~LevelAddedActorEvent();
    // NOLINTEND
};
