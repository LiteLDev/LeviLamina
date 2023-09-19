#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInsideBlockEvent {
public:
    // prevent constructor by default
    ActorInsideBlockEvent& operator=(ActorInsideBlockEvent const&);
    ActorInsideBlockEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorInsideBlockEvent@@QEAA@AEBU0@@Z
    MCAPI ActorInsideBlockEvent(struct ActorInsideBlockEvent const&);

    // symbol: ??1ActorInsideBlockEvent@@QEAA@XZ
    MCAPI ~ActorInsideBlockEvent();

    // NOLINTEND
};
