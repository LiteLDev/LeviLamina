#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelAddedActorEvent {
public:
    // prevent constructor by default
    LevelAddedActorEvent& operator=(LevelAddedActorEvent const&);
    LevelAddedActorEvent(LevelAddedActorEvent const&);
    LevelAddedActorEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1LevelAddedActorEvent@@QEAA@XZ
    MCAPI ~LevelAddedActorEvent();

    // NOLINTEND
};
