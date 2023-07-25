#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelAddedActorEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELADDEDACTOREVENT
public:
    LevelAddedActorEvent& operator=(LevelAddedActorEvent const&) = delete;
    LevelAddedActorEvent(LevelAddedActorEvent const&)            = delete;
    LevelAddedActorEvent()                                       = delete;
#endif

public:
    /**
     * @symbol ??1LevelAddedActorEvent\@\@QEAA\@XZ
     */
    MCAPI ~LevelAddedActorEvent();
};
