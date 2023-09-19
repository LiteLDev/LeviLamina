#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorGriefingBlockEvent {
public:
    // prevent constructor by default
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&);
    ActorGriefingBlockEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorGriefingBlockEvent@@QEAA@AEBU0@@Z
    MCAPI ActorGriefingBlockEvent(struct ActorGriefingBlockEvent const&);

    // symbol: ??1ActorGriefingBlockEvent@@QEAA@XZ
    MCAPI ~ActorGriefingBlockEvent();

    // NOLINTEND
};
