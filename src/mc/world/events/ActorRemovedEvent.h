#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedEvent {
public:
    // prevent constructor by default
    ActorRemovedEvent& operator=(ActorRemovedEvent const&);
    ActorRemovedEvent(ActorRemovedEvent const&);
    ActorRemovedEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ActorRemovedEvent@@QEAA@XZ
    MCAPI ~ActorRemovedEvent();

    // NOLINTEND
};
