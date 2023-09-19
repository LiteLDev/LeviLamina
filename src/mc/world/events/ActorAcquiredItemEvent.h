#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAcquiredItemEvent {
public:
    // prevent constructor by default
    ActorAcquiredItemEvent& operator=(ActorAcquiredItemEvent const&);
    ActorAcquiredItemEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorAcquiredItemEvent@@QEAA@AEBU0@@Z
    MCAPI ActorAcquiredItemEvent(struct ActorAcquiredItemEvent const&);

    // symbol: ??1ActorAcquiredItemEvent@@QEAA@XZ
    MCAPI ~ActorAcquiredItemEvent();

    // NOLINTEND
};
